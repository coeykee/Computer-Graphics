#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main(){
	int xi,yi,x,y,di,R,limit;
printf("Enter Radius+");
scanf("%d",&R);
	xi=0;
	yi=R;
	di=2*(1-R);
	limit=0;
int gdriver,gmode;
gdriver = VGA;gmode=VGAMAX;
initgraph(&gdriver,&gmode,"");



getch();
closegraph();
return 0;
}
