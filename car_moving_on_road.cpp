#include <iostream>
#include <graphics.h>

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char *) "");
	for(int i = 0; i <= 450; i+= 10)
	{
		setcolor(YELLOW);
	//	car body
		line(0 + i, 300, 50 + i, 300);
		line(50 + i, 300, 75 + i, 250);
		line(75 + i, 250, 170 + i, 250);
		line(170 + i, 250, 210 + i, 300);
		line(210 + i, 300, 275 + i, 300);
		line(275 + i, 300, 275 + i, 350);
		line(275 + i, 350, 238 + i, 350);
		arc(220 + i, 350, 0, 180, 20);
		line(201 + i, 350, 70 + i, 350);
		arc(52 + i, 350, 0, 180, 20);
		line(32 + i, 350, 0 + i, 350);
		line(0 + i, 350, 0 + i, 300);
			
	//	wheels 
		circle(52 + i, 350, 15);
		circle(52 + i, 350, 2);
		circle(220 + i, 350, 15);
		circle(220 + i, 350, 2);	
	
	//	car glasses
		line(60 + i, 300, 80 + i, 260);
		line(80 + i, 260, 167 + i, 260);
		line(167 + i, 260, 200 + i, 300);
		line(200 + i, 300, 60 + i, 300);
		line(120 + i, 260, 120 + i, 300);
		
	//	doors
		line(120 + i, 305, 120 + i, 345);
		ellipse(70 + i, 310, 0, 360, 5, 2);
		ellipse(135 + i, 310, 0, 360, 5, 2);
		
	//	road
		line(0, 365, getmaxx(), 365);		
		delay(200);
        cleardevice();
	}
	closegraph();
	getch();
	return 0;
}
