#include <iostream>
#include <math.h>
#include <graphics.h>

using namespace std;

int main()
{	
	int gdriver = DETECT;
	int gmode;
	initgraph(&gdriver, &gmode, (char *)"");
	int x1, x2, y1, y2;
	cout << "Enter coordinates of first point:\n";
	cin >> x1 >> y1;
	cout << "Enter coordinates of second point:\n";
	cin >> x2 >> y2;
	float dx, dy, m, minverse;
	dx = x2 - x1;
	dy = y2 - y1;
	m = dy/dx;
	minverse = 1/m;
	if((abs(m) < 1 && x1 > x2) || (abs(m) > 1 && y1 > y2))
	{
		swap(x1, x2);
		swap(y1, y2);
	}
	putpixel(x1, y1, WHITE);
	if(abs(m) < 1)
	{
		float y = y1;
		for(int x = x1 + 1; x <= x2 - 1; x++)
		{
			y = y1 + m;
			putpixel(x1, round(y), WHITE);
		}
	}
	else 
	{
		float x = x1;
		for(int y = y1 + 1; y <= y2 - 1; y++)
		{
			x = x1 + minverse;
			putpixel(round(x1), y, WHITE);
		}
	}
	getch();
	return 0;
}
