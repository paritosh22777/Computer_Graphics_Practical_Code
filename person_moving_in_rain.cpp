#include <iostream>
#include <graphics.h>

int main()
{
	int gd = DETECT, gm = DETECT;
	initgraph(&gd, &gm, (char *)"");
	for(int i = 0; i < 500; i++)
	{
//		rain
		for(int j = 0; j < 300; j++)
		{
			int x = rand() % getmaxx(), y = rand() % 350;
			setcolor(BLUE);
			setfillstyle(SOLID_FILL, BLUE);
			circle(x, y, 2);
			floodfill(x, y, BLUE);
		}
//		umbrella
		setcolor(YELLOW);
		setfillstyle(SOLID_FILL, YELLOW);
		pieslice(120 + i, 200, 0, 180, 50);
		line(120 + i, 200, 120 + i, 275);
//		face
		setcolor(WHITE);
		setfillstyle(SOLID_FILL, WHITE);
		circle(90 + i, 260, 10);
		floodfill(90 + i, 260, WHITE);
//		body
		line(90 + i, 270, 90 + i, 310);
//		arms
		if(i % 2 == 0)
		{
			line(90 + i, 275, 78 + i, 305);
		}
		else
		{
			line(90 + i, 275, 90 + i, 305);
		}
		line(90 + i, 275, 121 + i, 275);
//		legs
		if(i % 2 == 0)
		{
			line(90 + i, 310, 78 + i, 350);
			line(90 + i, 310, 102 + i, 350);
		}
		else
		{
			line(90 + i, 310, 90 + i, 350);
		}
//		road
		line(0, 350, getmaxx(), 350);
		delay(150);
		cleardevice();	
	}		
	closegraph();
	getch();
	return 0;
}
