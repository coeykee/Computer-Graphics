
//PROGRAM FOR 3D ROTATION
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{

	int a,a1,midx,midy,x1,x2,y1,y2;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	a=getmaxx();
	a1=getmaxy();
	midx=a/2;
	midy=a1/2;
	line(midx,0,midx,a1);
	line(0,midy,a,midy);
	
	bar3d(midx+50,midy-100,midx+60,midy-90,130,11);
	x1=(50*cos(0.758)-100*sin(0.758));
	y1=(50*sin(0.758)+100*cos(0.758));
	x2=(60*cos(0.758)-90*sin(0.758));
	y2=(60*sin(0.758)+90*cos(0.758));
	
	printf("Rotation about z- axis\n");
	bar3d(midx+50,midy-y1,midx+x2,midy-y2,130,11);
	
	printf("Rotation about x- axis\n");
	bar3d(midx+50,midy-x1,midx+60,midy-x2,130,1);
	
	printf("Rotation about y- axis\n");
	bar3d(midx+x1,midy-100,midx+x2,midy-90,130,11);
	
	getch();
	closegraph();
}
