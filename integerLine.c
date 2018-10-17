
//PROGRAM FOR INTEGER LINE DRAWING ALGORITHM
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
void main()
{
 int x1=10,y1=20,x2=50,y2=60,x,y,dx,dy,m,s1,s2,temp,inter=0;
 float e;
 //void putpixel(int x,int y);
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"  ");
 x=x1;
 y=y1;
 dx=abs(x2-x1);
 dy=abs(y2-y1);
 //s1=sign(x2-x1);
 //s2=sign(y2-y1);
 //Interchange dx and dy
 if(dy>dx)
 {
  temp=dx;
  dx=dy;
  dy=temp;
  inter=1;
 } 
 else
 {
   inter=0;
 }
 //Initialize e
 e=2*dy-dx;
 for(int i=1;i<=dx;i++)
 {
   putpixel(x,y,5);
   while(e>0)
   {
     if(inter==1)
      x=x+1;
      else
      y=y+1;
      e=e-(2*dx);
    }
    if(inter==1)
     y=y+1;
     else
     x=x+1;
     e=e+2*dy;
  }
  getch();
  }     
   
