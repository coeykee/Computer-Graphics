/*Draw 3d bar*/
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
printf("3D plotting");
//z=getmaxz();
line(0,y/2,x,y/2);
line(x/2,0,x/2,y);
setcolor(YELLOW);
bar3d(50,50,100,150,30,1);
getch();
closegraph();
return 0;
}
