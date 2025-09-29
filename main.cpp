#include <graphics.h>

int main()
{
    int gd=DETECT , gm;
    initgraph(&gd,&gm,(char*)"");
    //rectangle
    rectangle(15,13,165,91);
    //Circle
    circle(240,50,40);
    //Triangle
    line(75,117,15,195);
    line(135,195,75,117);
    line(15,195,135,195);
    //diamond
    line(225,117,195,156);
    line(225,208,195,156);
    line(225,208,255,156);
    line(255,156,225,117);
    //Line
    line(15,221,165,221);
    line(30,247,135,247);
    //ellipse
    ellipse(180,273,285,90,90,45);
    ellipse(255,353,105,270,90,45);
    //oblong
    ellipse(80,350,0,360,45,70);
    getch();
    closegraph();
    return 0;
}
