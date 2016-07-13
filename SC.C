#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

//Global Varibales
int tx,ty;

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
  // printf("Original Figure: \n");
   line(300, 100, 200, 200);
   line(300, 100, 400, 200);
   line(200, 200, 400, 200);

   printf("Enter the Value of tx and ty: \n");
   scanf("%d",&tx);
   scanf("%d",&ty);
   printf("Scaled Figure: \n");
   scale(300, 100, 200, 200);
   scale(300, 100, 400, 200);
   scale(200, 200, 400, 200);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

scale(int x1,int y1,int x2,int y2){
int v1,v2,v3,v4;
v1 = x1 * tx;
v2 = y1 * ty;
v3 = x2 * tx;
v4 = y2 * ty;
printf("%d\t%d\t%d\t%d\n",v1,v2,v3,v4);
line(v1,v2,v3,v4);
}