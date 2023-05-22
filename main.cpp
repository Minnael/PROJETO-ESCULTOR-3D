#include <iostream>
#include <fstream>
#include "sculptor.h"

int main(){
    Sculptor cubo(100, 100, 100);

    cubo.setColor(0, 1, 0, 1);
    cubo.putSphere(50, 50, 50, 30);
    cubo.cutSphere(50, 50, 50, 29);

    cubo.writeOFF("esfera.off");

    return 0;
}
