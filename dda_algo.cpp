#include <iostream>
#include <math.h>
#include <graphics.h>

using namespace std;

int main()
{	
	int gdriver = DETECT;
	int gmode;
	initgraph(&gdriver, &gmode, (char *)"");
	int x1, x2, y1, y2, dx, dy, steps;
	cout << "Enter coordinates of first point:\n";
	cin >> x1 >> y1;
	cout << "Enter coordinates of second point:\n";
	cin >> x2 >> y2;
	float xIncrement, yIncrement, x = x1, y = y1;
	dx = x2 - x1;
	dy = y2 - y1;
	steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
	xIncrement = dx / (float) steps;
	yIncrement = dy / (float) steps;
	putpixel(round(x), round(y), WHITE);
	for(int i = 0; i < steps; i++)
	{
		x += xIncrement;
		y += yIncrement;
		putpixel(round(x), round(y), WHITE);
	}
	getch();
	return 0;
}
