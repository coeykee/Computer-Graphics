
//PROGRAM FOR GERNERLISED ALGORITHM
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{

   int a,a1,b,b1,xt,ch,p=10,i,s1,s2,temp,interchange;
   int x1=5,y1=6,x,y,x2=7,y2=8,m,e,ebar;
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"");
  
   x=abs(x2-x1);
   y=abs(y2-y1);
  //s1=sign(x2-x1);
 //  s1=sign(y2-y1);
   for(i=1;i<=x2;i++)
   {
   		if(e>0)
   		{
  			 temp=x;
  			 x=y;
   			y=temp;
  		 interchange=1;
  		 }
  		 else
  		{
   			interchange=0;
  		 }
  	 ebar=2*y-x;
  
   		putpixel(x,y,4);
   }
   for(i=1;i<=x2;i++)
   while(ebar>0)
   {
   if(interchange=1)
   {
   x=x+1;
   }
   else
   {
   y=y+1;
   }
   putpixel(x,y,4);
   }
   getch();
   }
   
   
   

