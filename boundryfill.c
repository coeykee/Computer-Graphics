
//PROGRAM FOR BOUNDRYFILL
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

void boundryfill(int x, int y,int newcolor,int edgecolor);
void main()
{

  int gd=DETECT,gm,i;
  initgraph(&gd,&gm,"");
  int a,a1,b,b1;
  a=getmaxx;
  a1=getmaxy;
  b=a/2;
  b1=a1/2;
  line(b,0,b,a1);
  line(0,b1,a,b1);
  rectangle(300,300,400,400);
  
  for(i=400;i>=300;i--)
  {
    putpixel(300,i,8);
    delay(30);
    }
    
    for(i=300;i<=400;i++)
  {
    putpixel(i,300,8);
    delay(30);
    }
    
    for(i=300;i<=400;i++)
  {
    putpixel(400,i,8);
    delay(30);
    }
    
    for(i=400;i>=300;i--)
  {
    putpixel(i,400,5);
    delay(30);
    }
    getch();
    getch();
    closegraph;
    }
    
   void BoundaryFill4(int x, int y, int newcolor, int edgecolor)
{
   int current;
   getpixel(x, y);
   if(current != edgecolor && current != newcolor)
   {
       BoundaryFill4(x+1, y, newcolor, edgecolor);
       BoundaryFill4(x-1, y, newcolor, edgecolor);
       BoundaryFill4(x, y+1, newcolor, edgecolor);
       BoundaryFill4(x, y-1, newcolor, edgecolor);
   }
}

 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
