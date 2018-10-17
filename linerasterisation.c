
//PROGRAM FOR LINE RASTERISATION ALGORITHM
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
 int x1=10,y1=20,x2=30,y2=40,x,y,dx,dy,m,i;
 float e;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"  ");
 x=x1;
 y=y1;
 dx=x2-x1;
 dy=y2-y1;
 m=dy/dx;
 e=m-(1/2);
 for(i=1;i<=dx;i++)
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
 }
