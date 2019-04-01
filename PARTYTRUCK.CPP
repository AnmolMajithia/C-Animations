#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include <dos.h>

int main()
{
   int i, j = 0, gd = DETECT, gm,hit=1;

   initgraph(&gd,&gm,"C:\\turboc3\\BGI");

   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(25,240,"Press any key to view the moving car");

   getch();
   while(hit)
   {
     for( i = 0 ; i <= 420 ; i = i + 10, j++ )
     {
        outtextxy(50,50,"PARTY TRUCK IS HERE BOISSSS");
        rectangle(50+i,275,150+i,400);
        rectangle(150+i,350,200+i,400);
        circle(75+i,410,10);
        circle(175+i,410,10);
        setcolor(j);
        delay(100);
        if ( j == 15 )
           j = 2;

        cleardevice(); // clear screen
        if(kbhit())
        {
          hit =0;
          break;
        }
     }
     for( i = 0 ; i <= 420 ; i = i + 10, j++ )
     {
        outtextxy(50,50,"PARTY TRUCK IS HERE BOISSSS");
        rectangle(470-i,275,570-i,400);
        rectangle(570-i,350,620-i,400);
        circle(495-i,410,10);
        circle(595-i,410,10);
        setcolor(j);
        delay(100);
        if ( j == 15 )
           j = 2;

        cleardevice(); // clear screen
        if(kbhit())
        {
          hit =0;
          break;
        }
     }
   }

   getch();
   closegraph();
   return 0;
}
