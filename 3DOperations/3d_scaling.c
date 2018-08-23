/*Scalling on 3d object*/
#include<stdio.h>
#include<graphics.h>

int main()
{
int gdriver,gmode;
int a,b;
int x,y;
gdriver = VGA;gmode=VGAMAX;
initgraph(&gdriver,&gmode,"");
x=getmaxx();
y=getmaxy();
line(0,y/2,x,y/2);
line(x/2,0,x/2,y);
printf("Sacling 3D object");
bar3d(50,50,100,150,30,1);
float sf=3.8;
bar3d(50*sf,50*sf,100*sf,150*sf,30,1);
int xsf=2,ysf=3;
setcolor(RED);
bar3d(50*xsf,50*ysf,100*xsf,150*ysf,30,1);
getch();
closegraph();
return 0;
}
