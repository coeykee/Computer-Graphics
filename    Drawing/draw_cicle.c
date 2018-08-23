#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main(){
int X,Y,xi,yi,di,limit,R;
printf("Enter the radius:");
scanf("%d",&R);
xi=0;
yi=R;
di=-2*(1-R);
limit=0;
int d,d_;
int gdriver,gmode;
gdriver = VGA;gmode=VGAMAX;
initgraph(&gdriver,&gmode,"");
X=getmaxx();
Y=getmaxy();
int x=X/2;
int y=Y/2;
line(x,0,x,Y);
line(0,y,X,y);
int points[yi][yi];
int i=0;
while(yi>=limit){
	putpixel(x+xi,y-yi,3);
	//points[i][i]=x+xi,y-yi;
	putpixel(x-xi,y+yi,4);
	putpixel(y-yi,x+xi,5);
	putpixel(y+yi,x-xi,3);
		if(di<0){
			d=2*di+2*yi-1;
			if(d<=0){
				//MH(xi,yi,di);
				xi=xi+1;
				di=di+2*xi+1;
			}	
			else{
				//MD(xi,yi,di);
				xi=xi+1;
				yi=yi-1;
				di=di+2*xi-2*yi+2;
			}
		}
		if(di>0){
			d_=2*di-2*xi-1;
			if(d_<=0){
				//MD(xi,yi,di);
				xi=xi+1;
				yi=yi-1;
				di=di+2*xi-2*yi+2;}
			else{
				//MV(xi,yi,di);
				yi=yi-1;
				di=di-2*yi+1;
			}
		}
		if(di==0){//MD(xi,yi,di);
				xi=xi+1;
				yi=yi-1;
				di=di+2*xi-2*yi+2;
		}


i++;
delay(100);
}
/*for(int j=0;j<yi;j++)
{for( int i=0;i<yi;i++)
	{
	putpixel(points[i][j],points[i][j],7);
	}
}*/
getch();
closegraph();
return 0;


}//MainEnd

