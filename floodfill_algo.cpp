#include <iostream>
#include <graphics.h>

void floodFill(int x, int y, int newColor, int oldColor)
{
	if(getpixel(x, y) == oldColor)
	{
		putpixel(x, y, newColor);
		floodFill(x + 1, y, newColor, oldColor);
		floodFill(x - 1, y, newColor, oldColor);
		floodFill(x, y + 1, newColor, oldColor);
		floodFill(x, y - 1, newColor, oldColor);
		floodFill(x + 1, y + 1, newColor, oldColor);
		floodFill(x - 1, y + 1, newColor, oldColor);
		floodFill(x + 1, y - 1, newColor, oldColor);
		floodFill(x - 1, y - 1, newColor, oldColor);
	}
}	

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char *)"");
	rectangle(100, 100, 300, 300);
	floodFill(200, 200, YELLOW, BLACK);
	delay(20000);
	getch();
	closegraph();
	return 0;
}

