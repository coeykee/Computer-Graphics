#include<stdio.h>
#include<graphics.h>
int main()
{
int gdriver,gmode;
int a,b;
int x,y;
printf("3d reflection operations 1.Scale 2.Transform 3.Rotate 4.Reflect 0.exit");
int choice;
scanf("%d",&choice);
switch(choice)
 {
 	case 1:
		{
		
		 break;
		}
gdriver = VGA;gmode=VGAMAX;
initgraph(&gdriver,&gmode,"");
x=getmaxx();
y=getmaxy();
line(0,y/2,x,y/2);
line(x/2,0,x/2,y);
getch();
closegraph();
return 0;
}
