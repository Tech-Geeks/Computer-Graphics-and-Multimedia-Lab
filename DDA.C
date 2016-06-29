#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

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
  // xmax = getmaxx();
   //ymax = getmaxy();

   /* draw a diagonal line */
   //line(0, 0, xmax, ymax);
   dda(100,200,500,200);
   dda(500,200,500,400);
   dda(100,400,500,400);
   dda(100,200,100,400);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

dda(int x1,int y1,int x2,int y2){
int dx,dy,x,y,i,xinc,yinc,steps;
dx = x2-x1;
dy = y2-y1;
x=x1;
y=y1;
putpixel(x,y,RED);
if(abs(dx)>abs(dy)){
steps = abs(dx);
}
else{
steps = abs(dy);
}
xinc = abs(dx) / steps;
yinc = abs(dy) / steps;
for(i=1;i<steps;i++){
x = x + xinc;
y = y + yinc;
putpixel(x,y,RED);
}
}