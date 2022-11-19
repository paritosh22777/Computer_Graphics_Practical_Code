#include <iostream>
#include <graphics.h>
using namespace std;

void circlePlotPoints(int xCentre, int yCentre, int x, int y)
{
	putpixel(xCentre + x, yCentre + y, WHITE);
	putpixel(xCentre - x, yCentre + y, WHITE);
	putpixel(xCentre + x, yCentre - y, WHITE);
	putpixel(xCentre - x, yCentre - y, WHITE);
	putpixel(xCentre + y, yCentre + x, WHITE);
	putpixel(xCentre - y, yCentre + x, WHITE);
	putpixel(xCentre + y, yCentre - x, WHITE);
	putpixel(xCentre - y, yCentre - x, WHITE);
}

void circleMidpoint(int xCentre, int yCentre, int radius)
{
	int x = 0, y = radius;
	int p = 1 - radius;
	circlePlotPoints(xCentre, yCentre, x, y);
	while(x < y)
	{
		x++;
		if(p < 0)
		{
			p = p + 2 * x + 1;
		}
		else
		{
			y--;
			p = p + 2 * (x - y) + 1;
		}
		circlePlotPoints(xCentre, yCentre, x, y);
	}
}

int main()
{
	int gd = DETECT, gm;
	initgraph(&gm, &gd, (char*) "");
	int x, y, r;
	cout << "Enter coordinates of centre of circle:\n";
	cin >> x >> y;
	cout << "Enter length of radius of circle:\n";
	cin >> r;
	circleMidpoint(x, y, r);
	getch();
	return 0;
}
