#include <iostream>
#include <math.h>
#include <graphics.h>
using namespace std;

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char *)"");
	int x1, x2, y1, y2;
	cout << "Enter coordinates of first point:\n";
	cin >> x1 >> y1;
	cout << "Enter coordinates of second point:\n";
	cin >> x2 >> y2;
	int dx = x2 - x1, dy = y2 - y1;
	int p = 2 * dy - dx, p1 = 2 * dy, p2 = 2 * dy - 2 * dx;
    	int x = x1, y = y1; 
    	while(x < x2)  
    	{  
    	    x++;
    	    if(p < 0)
            {  
                p += p1;
	    }
            else
            {   
                y++;  
                p += p2;  
            }  
            putpixel(x, y, WHITE); 
        }  
	getch();
	return 0;
}
