

//PROGRAM FOR EDGEFILL
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
void main()
{
   int i;
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"");
  
  line(100,100,100,180);
  line(100,180,180,180);
  line(180,180,180,100);
  line(180,100,100,100);

	for(i=100;i<=180;i++)
	{
		putpixel(i,180,BLUE);
		delay(3);
	}

	for(i=100;i<=180;i++)
	{
		putpixel(100,i,BLUE);
		delay(3);
	}
	
	for(i=180;i>=100;i--)
	{
		putpixel(180,i,BLUE);
		delay(3);
	}
	
	for(i=180;i>=100;i--)
	{
		putpixel(i,100,BLUE);
		delay(3);
	}
    getch();
}//end main
