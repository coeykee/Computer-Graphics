/*Reflection on 3d object*/
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
setcolor(RED);
printf("%d   %d",x,y);
printf("\nReflection");
bar3d(x/2+50,50+50,x/2+100,150+50,30,1);
setcolor(BLUE);
//bar3d(50,50+tf,150+tf,100+tf,30,1);
setcolor(BLUE);
bar3d(x/2+50,y/2+50,x/2+100,y/2+150,30,1);
getch();
closegraph();
return 0;
}
