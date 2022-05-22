#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

fillellipse(260,150,100,30);
fillellipse(255,335,80,10);


ellipse(190,230,100,280,40,90);
ellipse(260,230,0,360,100,110);

outtextxy(250,230,"MY CUP");
getch();
}