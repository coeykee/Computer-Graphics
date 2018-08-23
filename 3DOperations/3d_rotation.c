/*Rotation on 3d object*/
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
int tf=75;
bar3d(50,50,100,150,30,1);
printf("Rotating 3D object");
setcolor(BLUE);
bar3d(50+tf,50+tf,150+tf,100+tf,30,1);
//bar3d(400, 100, 550, 400, 30, 1);
//bar3d(50,100,100,150,30,1);
setcolor(RED);
bar3d(50,50+105,100,150+105,30,1);
getch();
closegraph();
return 0;
}
