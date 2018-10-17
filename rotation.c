#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm;
 int i,j,k,e,f,sum=0;
 int a[10][10], b[2][2],c[2][2];
 
 printf("Enter the co-ordinates of line:");
 for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
 scanf("%d",&a[i][j]);
}
}

printf("Enter the Standard matrix:");
 for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
 scanf("%d",&b[i][j]);
}
}
printf("matrix co-ordinates:\n");
 for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
 printf("%d",a[i][j]);
}
 printf("\n");
}

printf("standard co-ordinates:\n");
 for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
 printf("%d",b[i][j]);
}
printf("\n");
}

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
 sum=sum+(a[i][k]*b[k][j]);
}
c[i][j]=sum;
sum=0;
}
}

/*printf("matrix mult:\n");
 for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
 printf("%d",c[i][j]);
}
 printf("\n");
}*/
initgraph(&gd,&gm,NULL);

setcolor(WHITE);
setfontcolor(BLUE);
e=getmaxx();
f=getmaxy();

line(0,f/2,e,f/2);
line(e/2,0,e/2,f);


 setfontcolor(GREEN);
 printf("BEFORE ROTATION: \n");
 setfontcolor(RED);
 printf("AFTER ROTATION: \n");
 setcolor(GREEN);
 line(a[0][0],a[0][1],a[1][0],a[1][1]);
 
 //printf("After rotation:\n");
 setcolor(RED);
 line(a[0][0],a[0][1],c[1][0],c[1][1]);
getch();
 



}

