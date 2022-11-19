#include <iostream>
#include <graphics.h>

int main()
{
	initwindow(800,800);
//	to draw cuboid room
	rectangle(100, 100, 400, 400);//behind rectangle
	rectangle(200, 200, 500, 500);//forward rectangle
	line(100, 100, 200, 200);//top left line
	line(400, 400, 500, 500);//bottom right line
	line(100, 400, 200, 500);//bottom left line
	line(400, 100, 500, 200);//top right line
	
//	to draw light coming from source (here corner)

	setcolor(YELLOW);	//set color of boundaries to yellow
	setfillstyle(SOLID_FILL, YELLOW);	//fills yellow background color in the below ellipse and polygon
	
//	draw ellipse with its coordinates of centre as coordinates of center of bottom base rectangle using ellipse() or fillellipse() functions
	fillellipse(300, 450, 120, 30);
	
//	to draw a triangle using fillpoly() function
	int arr[] = {100, 100, 180, 450, 420, 450, 100, 100};
	
//	triangle will be drawn with lines as -> line(100, 100, 180, 450), line(180, 450, 420, 450), line(420, 450, 100, 100)

// to draw a 'n' sided polygon, use drawpoly(n+1, arr) or fillpoly(n+1, arr), where arr stores all points. 
	fillpoly(4, arr);
	getch();
	return 0;	
}

