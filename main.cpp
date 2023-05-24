#include <iostream>
#include <fstream>
#include "sculptor.h"

int main(){
    Sculptor cubo(100, 100, 100);
    cubo.setColor(1, 0, 0, 1);
    cubo.putEllipsoid(50, 50, 50, 50, 50, 40);
    cubo.cutEllipsoid(50, 50, 50, 49, 51, 39);

    cubo.writeOFF("ellipsoid.off");

    return 0;
}
