#include<stdio.h>
#include<math.h>
#include<graphics.h>
void putpixel(int x,int y,int color);
int main()
{
    int gdriver,gmode, xc,yc;
   // void putpixel(int x,int y, color);
    
    int di,d,d1,xi,yi,r;
    xi=0;
    printf("\n Enter radius of circle:");
    scanf("%d",&r);
initgraph(&gdriver,&gmode,"");
    xc =getmaxx()/2;
    yc= getmaxy()/2;
    yi=r;
    di=2*(1-r);
    int limit=0;

    while(yi>=limit)
    {
      putpixel(xc+xi,yc-yi,2);
      putpixel(xc-xi,yc-yi,2);
      putpixel(xc-xi,yc+yi,2);
      putpixel(xc+xi,yc+yi,2);
      if(di<0)
      {
         d=2*di+2*yi-1;
         if(d<=0)
         {
           //mh(xi,yi,di)
           xi=xi+1;
           di=di+2*xi+1;
         }
         else
         {
           //md(xi,yi,di)
           xi=xi+1;
           yi=yi-1;
           di=di+2*xi-2*yi+2;
         }
       }
       else if(di>0)
       {
          d1=2*di-2*xi-1;
          if(d1<=0)
          {
            //md(xi,yi,di)
           xi=xi+1;
           yi=yi-1;
           di=di+2*xi-2*yi+2;
          }
          else
          {
            // mv(xi,yi,di)
            yi=yi-1;
            di=di-2*yi+1;
          }
      }
      else if(di==0)
      {
        //md(xi.yi,di)
        xi=xi+1;
        yi=yi-1;
        di=di+2*xi-2*yi+2;
      }
    }
    getch();
    closegraph;
    return 0;
}
