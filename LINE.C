#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax,i,x=0;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C://BC/BGI");

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

   setcolor(GREEN);
   //xmax = 200;
   //ymax = 200;

   /* draw a diagonal line */
   //line(100, 100, 150, 150);
   //line(200,150,100,150);
   for(i=0;i<=7;i++){
   if(i<=6){
   x=x+70;
   clrscr();
   line(0,100,500,100);
   line(100,500,500,100);
   //line(500,500,200,200);
   circle(x,90,10);
   //getch();
   sleep(1);
   }
   if(i==7){
   x=x+70;
   clrscr();
   line(0,100,500,100);
   line(100,500,500,100);
   circle(x,110,10);
   //getch();
   sleep(1);
   }
   }

   /* clean up */
   getch();
   closegraph();
   return 0;
}