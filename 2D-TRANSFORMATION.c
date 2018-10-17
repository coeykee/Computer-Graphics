//PROGRAM FOR 2D TRANSFORMATION

#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{
            int a,a1,b,b1,c,c1,d,d1,e,e1,f,f1,g,g1,h,h1,tf,ts,ch;
            int gm;
            int gd=DETECT;
            initgraph(&gd,&gm,"");
            a=getmaxx();
	       a1=getmaxy();
	       b=a/2;
	       b1=a1/2;
	       line(b,0,b,a1);
	       line(0,b1,a,b1);
	       line(120,120,240,30);
	       //line(360,220,500,100);
	       
	       
	       //For translation
	       tf=50;
	       c1=120+tf;
	       c=120+tf;
	       d=240+tf;
	       d1=30+tf;
	       line(c1,c,d,d1);
	       
	       
	       //for scaling
	        ts=2;
	       e1=120*ts;
	       e=120*ts;
	       f=240*ts;
	       f1=30*ts;
	       line(e1,e,f,f1);
	       
	        //Reflection
	       
	       line(60,80,40,110);
	      //After reflection
	       line(80,60,110,40);
	       
	       //for rotation
	       line(400,300,260,180);
	       getch();
	       
	      }//end main 
	       
