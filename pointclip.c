
//PROGRAM FOR POINTCLIPPING
#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
        int x=40,y=66,flag=0;
         int l=20,t=40,r=60,b=70;
        int gd=DETECT,gm;
        initgraph(&gd,&gm,"");
        
        rectangle(l,t,r,b);
        if(x>l&&x<r)
        {
        	if(y>t && y<b)
        	{
        		putpixel(x,y,5);
        		flag=1;
        	}
        	
	}
	if(flag==1)
	{
		printf("point is inside the window");
	}
	else
	{
	printf("point is outside of the window");
	} 
	        
        getch();
        }
