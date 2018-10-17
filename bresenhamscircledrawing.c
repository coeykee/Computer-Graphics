
//PROGRAM FOR BRESENHAMS CIRCLE DRAWING ALGORITHM
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{ 
	int xc,yc;
	int x,y,d=0,d1=0,d2=0,R=70,lm=0;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	xc=getmaxx()/2;
	yc=getmaxy()/2;
	
	x=0;
	y=R;
	d=2*(1-R);
	
	
	while(y>=lm)
	{
	 
	    // putpixel(x,y,RED);
	     
	      putpixel(xc+x,yc-y,5);
              putpixel(xc-x,yc-y,6);
              putpixel(xc+x,yc+y,5);
              putpixel(xc-x,yc+y,8);
              putpixel(xc+y,yc-x,9);
              putpixel(xc-y,yc-x,2);
              putpixel(xc+y,yc+x,3);
              putpixel(xc-y,yc+x,5);
           
                      delay(100);
                      
	  if(d<0)
	    {
	      d1=2*d+2*y-1;
	    
	           if(d1<=0)
	           {
	             x=x+1;
	             d=d+2*x+1;
	           }
	        else
	           {
	            x=x+1;
	            y=y-1;
	            d=d+2*x-2*y+2;
	       }
	     }
	  else if(d>0)
	       {
	         d2=2*d-2*y-1;
	         if(d2<=0)
	          {
	            x=x+1;
	            y=y+1;
	            d=d+2*x-2*y+2;
	          }
	          else
	          { 
	           y=y-1;
	           d=d-2*y+1;
	          }
	        }
	      
	   else   if(d==0)
	       {
	            x=x+1;
	            y=y-1;
	            d=d+2*x-2*y+2;
               }
              }
              getch();
           }	        
	       
	    
