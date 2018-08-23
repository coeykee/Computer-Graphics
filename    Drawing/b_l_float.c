#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main(){
int x,y,x0,y0,x1,y1,dx,dy,m,e;
printf("Enter 1 co-ord. of line (x0,y0)=");
scanf("%d%d",&x0,&y0);
printf("Enter 1 co-ord. of line (x1,y1)=");
scanf("%d%d",&x1,&y1);
x=x0;
y=y0;
dx=x1-x0;
dy=y1-y0;
m=dy/dx;
e=2*dy-dx;
printf("initial values:\nX0=%d\ty0=%d\nx1=%d\ty1=%d\nm=%f\ne=%f",x0,y0,x1,y1,m,e);

int gdriver,gmode;
gdriver = VGA;gmode=VGAMAX;
initgraph(&gdriver,&gmode,"");
do{
for(int i=1;i<dx;i++)
{
putpixel(x,y,2);
//printf("\n%d  %d\n",x,y);
if(e>=0){
y=y+1;
e=e-2*dx;
}
x=x+1;
e=e+2*dy;
}
}while(dx<(x1-x0));


getch();
closegraph();
return 0;
}
