//Point Clipping
#include<stdio.h>
#include<graphics.h>
int main(){
  printf("***Enter your choice between 0-799 and 0=599***");
	int x,y,xl,xr,yt,yb;
  printf("\nEnter pion A(x1,y1): ");
	scanf("%d",&x);
	scanf("%d",&y);
  printf("\nEnter window (xl,xr,yt,yb): ");
	scanf("%d",&xl);
	scanf("%d",&xr);
	scanf("%d",&yt);
	scanf("%d",&yb);
  int gdriver,gmode;
  gdriver = VGA;gmode=VGAMAX;
  initgraph(&gdriver,&gmode,"");
	putpixel(x,y,7);
	rectangle(xl,yt,xr,yb);
	if(x>xl && x<xr){
		if(y<yb && y>yt){
			printf("Point (%d,%d) is totally visible",x,y);
		}
	}
	else{
			printf("Point (%d,%d) is totally invisible",x,y);
	}
  getch();
  closegraph();
  return (0);
}
