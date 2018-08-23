//Simple Visibility Algorithm
#include<stdio.h>
#include<graphics.h>
int main(){
  printf("***Enter your choice between 0-799 and 0=599***");
	int x1,y1,x2,y2,xl,xr,yt,yb;
  printf("Enter A(x1,y1) and B(x2,y2) for line:");
	scanf("%d",&x1);
	scanf("%d",&y1);
	scanf("%d",&x2);
	scanf("%d",&y2);
  printf("\nEnter window (xl,xr,yt,yb): ");
	scanf("%d",&xl);
	scanf("%d",&xr);
	scanf("%d",&yt);
	scanf("%d",&yb);

  int gdriver,gmode;
  gdriver = VGA;gmode=VGAMAX;
  initgraph(&gdriver,&gmode,"");
	setcolor(GREEN);
	printf("Before Clipping(green)");
	line(x1,y1,x2,y2);
	setcolor(RED);
	printf("\tClipping Window(red)");
	rectangle(xl,yt,xr,yb);
	setcolor(BLUE);
	printf("\tAfter Clipping(blue)");
	int visibility=1;
	if((x1<xl && x2<xl) || (x1>xr && x2>xr))
		visibility=0;
	if((y1<yt && y2<yt) || (y1>yb && y2>yb))
		visibility=0;
	/*visiblity calc
	if(visibility==1)
	if(x1<xl && x1>xr)
		visibility=2;
	if(x2<xl && x2>xr)
		visibility=2;
	if(y1<yb && y1>yt)
		visibility=2;
	if(y2<yb && y2>yt)
		visibility=2;
	//partial visibility*/
	if(visibility==0){printf("\tLine is INVISIBLE");}
	if(visibility==1){printf("\tLine is VISIBLE");}
	//if(visibility==2){printf("\tLine is PARTIALLY VISIBLE");}
  getch();
  closegraph();
  return (0);
}
