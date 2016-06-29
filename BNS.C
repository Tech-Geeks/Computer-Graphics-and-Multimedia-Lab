#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   //int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\BC\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   //setcolor(getmaxcolor());
   //xmax = getmaxx();
   //ymax = getmaxy();

   /* draw a diagonal line */
   //l ymax);
   bns(100,200,500,200);
   bns(500,200,500,400);
   bns(100,400,500,400);
   bns(100,200,100,400);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

bns(int x1,int y1,int x2,int y2){
int dx,dy,two_dx,two_dy,dop,p;
dx = x2-x1;
dy = y2-y2;
two_dx = 2*dx;
two_dy = 2*dy;
dop = two_dy - dx;
p = dop;
while(x1<x2){
if(p<0){
p = p + two_dy;
putpixel(++x1,y1,RED);
}
else{
p = p + two_dy - two_dx;
putpixel(++x1,++y1,RED);
}
}
}