#include <iostream>
#include <fstream>
#include "sculptor.h"

int main(){
    Sculptor cubo(100, 100, 100);

    cubo.setColor(1, 0, 0, 1);
    cubo.putBox(40, 60, 40, 60, 30, 70);
    cubo.cutBox(41, 59, 41, 60, 30, 70);
    cubo.setColor(0, 0, 1, 1);
    cubo.putSphere(50, 50, 50, 8);
    cubo.cutSphere(50, 50, 50, 7);
    /*cubo.setColor(1, 0, 0, 1);
    cubo.putEllipsoid(30, 30, 30, 30, 45, 45);
    cubo.putEllipsoid(30, 30, 30, 29, 44, 44);
    cubo.setColor(0, 0, 1, 1);
    cubo.putSphere(50, 50, 50, 30);
    cubo.cutSphere(50, 50, 50, 29);
    */
    cubo.writeOFF("ellipsoid.off");

    return 0;
}
