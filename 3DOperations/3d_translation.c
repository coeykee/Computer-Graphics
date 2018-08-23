/*translation*/
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
printf("Translating 3D object");
line(0,y/2,x,y/2);
line(x/2,0,x/2,y);
int tf=100;
bar3d(50,50,100,150,30,1);
setcolor(BLUE);
bar3d(50+tf,50+tf,100+tf,150+tf,30,1);
getch();
closegraph();
return 0;
}
