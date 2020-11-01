#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
	int gd=DETECT, gm; int i;
	initgraph (&gd,&gm,"c:\tc\\bgi");

	clrscr();

	for(i=0;i<500;i++)
	{
		setcolor(i);
		//coordinates of center from x axis, y axis, radius
		circle(100,100,30+i);
		delay(30);
		//cleardevice(); //try with and without cleardevice();
	}

	getch();

	closegraph();
}
