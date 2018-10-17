#include<stdio.h>
#include<graphics.h>
void main()
{
	int  a,b,a1,b1,c,c1,x=60,y=50,left,right,top,bottom,depth=150,flag=1,ts=2;
	int  gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	a=getmaxx();
	a1=getmaxy();
	b=a/2;
	b1=a1/2;
	line(b,0,b,b1);
	line(0,b1,a,b1);
	bar3d(50,100,100,200,150,1);
	left=50+x;
	top=100+y;
	bottom=200+y;
	right=100+x;
	
     bar3d(left,top,right,bottom,depth,flag);
     
     left=50*ts;
	top=100*ts;
	bottom=200*ts;
	right=100*ts;
	
	bar3d(left,top,right,bottom,depth,flag);
	
	
getch();
}
