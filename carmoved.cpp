#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <direct.h>
int main()
{

    int gd=DETECT, gm;
    int i;
    initgraph(&gd,&gm,"C://TURBOC3//BGI");
    for (i=0; i<=600; i+=20){
        setcolor(WHITE);
    line (0,300,640,300);
    circle(100+i, 285,15);
    circle(200+i,285,15);
    circle(100+i, 285,5);
    circle(200+i,285,5);
    setcolor(GREEN);
    line(65+i,285,85+i,285);
    line(115+i,285,185+i,285);
    line (65+i,285,65+i,260);
    line(235+1,285,235+1,260);

    line (65+i,260,100+i,255);
    line (235+i,260,200+i,255);
    line(100+i,255,115+i,235);
    line(200+i,255,185+i,235);
    line(115+i,235,185+i,235);
    line(179+i,238,152+i,238);
    line(152+i,255,152+i,238);
    line(152+i,255,177+i,255);
    line(177+i,239,177+i,255);
    delay(200);
    cleardevice();}
    getch();

}
