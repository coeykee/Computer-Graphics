#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int sign(int c);
int main(){
	int x,y,x0,y0,x1,y1,e,interchange;
	float dx,dy;
	float m;
printf("Enter 1 co-ord. of line (x0,y0)=");
scanf("%d%d",&x0,&y0);
printf("Enter 1 co-ord. of line (x1,y1)=");
scanf("%d%d",&x1,&y1);
	x=x0;
	y=y0;
	dx=x1-x0;
	dy=y1-y0;
	m=dy/dx;
int s1=sign(x1-x0);
int s2=sign(y1-y0);
int gdriver,gmode;
gdriver = VGA;gmode=VGAMAX;
initgraph(&gdriver,&gmode,"");

	if(dy>dx){
		int temp;
		temp=dx;
		dx=dy;
		dy=temp;
		interchange=1;
	}
	else{
		interchange=0;
	}
	e=2*dy-dx;

while(dx<=(x1-x0)){
for(int i=1;i<dx;i++)
{
putpixel(x,y,2);
//printf("\n%d  %d\n",x,y);
while(e>0){
	if(interchange=1){
	x=x+s1;
	}
	else{
	y=y+s2;		
	}
	e=e-2*dx;
	}

if (interchange=1){
y=y+s2;
}
else{
x=x+s1;}
e=e+2*dy;
}


getch();
closegraph();
return 0;
}

}
int sign(int c){
return 1;
}

