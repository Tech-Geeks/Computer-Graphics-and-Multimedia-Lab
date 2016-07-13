#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

//Global Varibales
int angle;
float p;

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
   //line(0, 0, xmax, ymax);
   //printf("Original Figure: \n");
   line(300, 100, 200, 200);
   line(300, 100, 400, 200);
   line(200, 200, 400, 200);

   printf("Enter the Value the angle: \n");
   scanf("%d",&angle);
   p = (3.14*angle)/180;
   printf("Rotated Figure: \n");
   rotate(300, 100, 200, 200);
   rotate(300, 100, 400, 200);
   rotate(200, 200, 400, 200);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

rotate(int x1,int y1,int x2,int y2){
int v1,v2,v3,v4;
v1 = x1 * cos(p) - y1 * sin(p);
v2 = x1 * sin(p) + y1 * cos(p);
v3 = x2 * cos(p) -  y2 * sin(p);
v4 = x2 * sin(p) +  y2 * cos(p);
printf("%d\t%d\t%d\t%d\n",v1,v2,v3,v4);
line(v1,v2,v3,v4);
}