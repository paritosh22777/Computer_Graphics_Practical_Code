#include <iostream>
#include <graphics.h>
using namespace std;

void drawLine()
{
	cout << "Line:\n";
	int x1, x2, y1, y2;
	cout << "Enter coordinates of first end-point:\n";
	cin >> x1 >> y1;
	cout << "Enter coordinates of second end-point:\n";
	cin >> x2 >> y2;
	line(x1, y1, x2, y2);
}

void drawCircle()
{
	cout << "Circle:\n";
	int x, y, r;
	cout << "Enter coordinates of centre of circle:\n";
	cin >> x >> y;
	cout << "Enter length of radius of circle:\n";
	cin >> r;
	circle(x, y, r);
}

void drawArc()
{
	cout << "Arc:\n";
	int x, y, s, e, r;
	cout << "Enter coordinates of centre of arc:\n";
	cin >> x >> y;
	cout << "Enter the starting and ending angles of arc:\n";
	cin >> s >> e;
	cout << "Enter length of radius of arc:\n";
	cin >> r;
	arc(x, y, s, e, r);
}

void drawEllipse()
{
	cout << "Ellipse:\n";
	int x, y, s, e, xr, yr;
	cout << "Enter coordinates of centre of ellipse:\n";
	cin >> x >> y;
	cout << "Enter the starting and ending angles of ellipse:\n";
	cin >> s >> e;
	cout << "Enter length of x-radius of ellipse:\n";
	cin >> xr;
	cout << "Enter length of y-radius of ellipse:\n";
	cin >> yr;
	ellipse(x, y, s, e, xr, yr);
}

void drawRectangle()
{
	cout << "Rectangle:\n";
	int l, t, r, b;
	cout << "Enter coordinates of top-left corner of rectangle:\n";
	cin >> l >> t;
	cout << "Enter coordinates of bottom-right corner of rectangle:\n";
	cin >> r >> b;
	rectangle(l, t, r, b);
}

void helperFunc()
{
	int opt;
	cout << "\nSelect a number between 1 and 5 to draw above corresponding geometric structure:\n";
	cin >> opt;
	switch(opt)
	{
		case 1: drawLine();
		break;
		case 2: drawCircle();
		break;
		case 3: drawArc();
		break;
		case 4: drawEllipse();
		break;
		case 5: drawRectangle();
		break;
		default: helperFunc();
	}
}

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*) "");
	cout << "Geometric structures:\n1. Line\n2. Circle\n3. Arc\n4. Ellipse\n5. Rectangle\n";
	helperFunc();
	getch();
	return 0;
}
