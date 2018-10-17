//Program for seedfill algorithm
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int a,a1,b,b1,i,j;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");

	a=getmaxx();
	a1=getmaxy();
	b=a/2;
	b1=a1/2;

	line(b,0,b,a1);
	line(0,b1,a,b1);

	setcolor(GREEN);
	setfontcolor(GREEN);
	outtextxy(2,80,"Drawing Line");
	line(100, 200, 200, 200);
	line(200, 200, 200, 400);
	line(200, 400, 100, 400);
	line(100, 400, 100, 200);
	
	line(100, 300, 150, 200);
	for(i=100;i<=200;i++)
		{
	    	    for(j=200;j<=400;j++)
	        	putpixel(i,j,5);
	        	delay(80);
		}
	
	closegraph();
	getch();

}
