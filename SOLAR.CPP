#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include <dos.h>

int main()
{
  int hit=1,x,y,sun,merc,ven,earth,mars,jupiter,saturn,uranus,neptune,t=0,c=0;
  int gd=DETECT, gm;
  initgraph(&gd,&gm,"C:\\turboc3\\BGI");
  do
  {
    cleardevice();
    //For Sun
    sun=30;
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(300,200,sun);
    floodfill(300,200,YELLOW);
    setcolor(1);
    outtextxy(300,195,"SUN");

    //orbit for Mercury
    setcolor(WHITE);
    ellipse(300,200,0,360,50,20);
    //for Mercury
    merc=5;
    setcolor(6);
    x=300+50*sin(t*0.8);
    y=200+20*cos(t*0.8);
    setfillstyle(SOLID_FILL,6);
    circle(x,y,merc);
    floodfill(x,y,6);
    setcolor(9);

    //orbit for Venus
    setcolor(WHITE);
    ellipse(300,200,0,360,80,30);
    //for Venus
    ven=6;
    setcolor(5);
    x=300+80*sin(t*0.7);
    y=200+30*cos(t*0.7);
    setfillstyle(SOLID_FILL,5);
    circle(x,y,ven);
    floodfill(x,y,5);
    setcolor(9);

    //orbit for Earth
    setcolor(WHITE);
    ellipse(300,200,0,360,110,40);
    //for Earth
    earth=11;
    setcolor(10);
    x=300+110*sin(t*0.6);
    y=200+40*cos(t*0.6);
    setfillstyle(SOLID_FILL,10);
    circle(x,y,earth);
    floodfill(x,y,10);
    setcolor(9);

    //orbit for Mars
    setcolor(WHITE);
    ellipse(300,200,0,360,140,50);
    //for Mars
    mars=8;
    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    x=300+140*sin(t*0.5);
    y=200+50*cos(t*0.5);
    circle(x,y,mars);
    floodfill(x,y,4);
    setcolor(9);

    //orbit for Jupiter
    setcolor(WHITE);
    ellipse(300,200,0,360,180,70);
    //for Jupiter
    jupiter=15;
    setcolor(8);
    setfillstyle(SOLID_FILL,12);
    x=300+180*sin(t*0.4);
    y=200+70*cos(t*0.4);
    circle(x,y,jupiter);
    floodfill(x,y,8);
    setcolor(9);

    //orbit for Saturn
    setcolor(WHITE);
    ellipse(300,200,0,360,200,90);
    //for Saturn
    saturn=14;
    setcolor(5);
    setfillstyle(SOLID_FILL,5);
    x=300+200*sin(t*0.3);
    y=200+90*cos(t*0.3);
    circle(x,y,saturn);
    floodfill(x,y,5);
    setcolor(9);

    //orbit for Uranus
    setcolor(WHITE);
    ellipse(300,200,0,360,220,110);
    //for Uranus
    uranus=13;
    setcolor(3);
    setfillstyle(SOLID_FILL,3);
    x=300+220*sin(t*0.2);
    y=200+110*cos(t*0.2);
    circle(x,y,uranus);
    floodfill(x,y,3);
    setcolor(9);

    //orbit for Neptune
    setcolor(WHITE);
    ellipse(300,200,0,360,240,120);
    //for Neptune
    neptune=12;
    setcolor(9);
    setfillstyle(SOLID_FILL,9);
    x=300+240*sin(t*0.1);
    y=200+120*cos(t*0.1);
    circle(x,y,neptune);
    floodfill(x,y,9);
    setcolor(9);

    setcolor(WHITE);
    outtextxy(260,400,"Solar System");
    outtextxy(25,350,"Anmol Majithia : 17102031");
    outtextxy(400,350,"Anooj Sarvankar : 17102023");

    t++;
    if(kbhit())
    {
      hit =0;
      break;
    }
    c++;
    if(c==64)
    {
      outtextxy(250,30,"Super Eclipse!");
      delay(3000);
    }
    else if(c==32)
    {
      outtextxy(250,30,"Semi Super Eclipse!");
      delay(3000);
    }
    delay(200);

  }while(hit);

  getch();
  closegraph();
  return(0);
}
