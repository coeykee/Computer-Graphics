#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

void FloodFill4(int x,int y,int newcolor,int oldcolor);
void main()
{
	int gd=DETECT ,gm,i;
	initgraph(&gd,&gm,"");
	int a,b,a1,b1,x=100,y=200;
	a=getmaxx();
	a1=getmaxy();
	b=a/2;
	b1=a1/2;
	line(b,0,b,a1);
	line(0,b1,a,b1);
	circle(x,y,3);
	FloodFill4(100,200,5,6);
	closegraph();
	getch();
}

void FloodFill4(int x,int y,int newcolor,int oldColor)
{
	if(ReadPixel(x,y) == oldColor)
	{
		FloodFill4(x+1, y, newcolor, oldColor);
	     FloodFill4(x-1, y, newcolor, oldColor);
	     FloodFill4(x, y+1, newcolor, oldColor);
       	FloodFill4(x, y-1, newcolor, oldColor);
   	}
}
