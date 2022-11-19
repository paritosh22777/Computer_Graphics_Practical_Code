#include <iostream>
#include <graphics.h>

void boundaryFill(int x, int y, int fillColor, int boundaryColor)
{
	if(getpixel(x, y) != fillColor && getpixel(x, y) != boundaryColor)
	{
		putpixel(x, y, fillColor);
		boundaryFill(x + 1, y, fillColor, boundaryColor);
		boundaryFill(x - 1, y, fillColor, boundaryColor);
		boundaryFill(x, y + 1, fillColor, boundaryColor);
		boundaryFill(x, y - 1, fillColor, boundaryColor);
		boundaryFill(x + 1, y + 1, fillColor, boundaryColor);
		boundaryFill(x - 1, y + 1, fillColor, boundaryColor);
		boundaryFill(x + 1, y - 1, fillColor, boundaryColor);
		boundaryFill(x - 1, y - 1, fillColor, boundaryColor);
	}
}	

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char *)"");
	rectangle(100, 100, 300, 300);
	boundaryFill(200, 200, RED, WHITE);
	delay(20000);
	getch();
	closegraph();
	return 0;
}

