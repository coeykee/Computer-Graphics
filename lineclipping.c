
//PROGRAM FOR LINECLIPPING
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
void BoundaryFill4(int x,int y,int newcolor,int edgecolor );

void main()
{
	int gd=DETECT ,gm,i;
	double d=0,x,slop,slop1,x2,x3,slop2;
	initgraph(&gd,&gm,"");
	int a,b,a1,b1;
	a=getmaxx();
	a1=getmaxy();
	b=a/2;
	b1=a1/2;
	//line(b,0,b,a1);
//	line(0,b1,a,b1);
	rectangle(120,190,220,280);
	line(140,145,220,300);
	outtextxy(300,50,"before clipping");
	
	slop=(280-145)/(200-140);
	slop1=slop;
	x2=((190-145)/slop1)+140;
	getch();
	cleardevice();
	rectangle(120,190,220,280);
	outtextxy(300,50,"after clipping");
	setcolor(2);
	//line(x2,190,200,280);
	slop2=slop;
	x3=(220-(300-280)/slop2);
	line(x2,190,x3,280);	
		getch();
	getch();
	closegraph();
}
