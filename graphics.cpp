#include<graphics.h> /* header file */
#include<conio.h>

main()
{
 /* the following two lines are the syntax for writing a particular
 program in graphics. It's explanation is given after the program.*/

   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");


   setbkcolor (GREEN);

   getch();
   closegraph();
   return 0;
}
