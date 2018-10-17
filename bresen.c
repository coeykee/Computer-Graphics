//bresenhams line rasterization
#include<stdio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm;
 int x,y,x1,y1,x2,y2,dx,dy;
 float e,m;
 printf("Enter starting co-ordinates of line: ");
 scanf("%d%d",&x1,&y1);
 printf("Enter ending co-ordinates of line: ");
 scanf("%d%d",&x2,&y2);
 x=x1; 
 y=y1;
 dx=x2-x1; 
 dy=y2-y1;
 m=dy/dx;
 e=m-(1/2);
 initgraph(&gd,&gm,NULL);
 for(int i=1;i<=dx;i++)
 {
  putpixel(x,y,3);
  while(e>=0)
  {
   y=y+1;
   e=e-1;
  }
   x=x+1; 
   e=e+m;
  
 }
 getch();
 closegraph();
 return 0;
}
