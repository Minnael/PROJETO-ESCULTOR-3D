#include <iostream>
#include <fstream>
#include "sculptor.h"

int main(){
    Sculptor teste(100, 100, 100);

    //DEFININDO VOXEL´S SIMPLES
    teste.setColor(1, 0, 0, 1);
    teste.putVoxel(50, 50, 50);

    teste.setColor(0, 1, 0, 1);
    teste.putVoxel(51, 50, 50);

    teste.setColor(0, 0, 1, 1);
    teste.putVoxel(49, 50, 50);

    teste.setColor(1, 1, 0, 1);
    teste.putVoxel(52, 50, 50);

    teste.setColor(0, 1, 1, 1);
    teste.putVoxel(48, 50, 50);

    teste.setColor(1, 0, 1, 1);
    teste.putVoxel(53, 50, 50);

    teste.setColor(1, 1, 1, 1);
    teste.putVoxel(47, 50, 50);

    teste.setColor(0, 0, 0, 1);
    teste.putVoxel(50, 51, 50);

    //DEFININDO UMA ESFERA BÁSICA
    teste.setColor(1, 0, 0, 1);
    teste.putSphere(50, 85, 50, 29);

    //DEFININDO UM CORTE NA ESFERA CRIADA
    teste.cutSphere(50, 75, 50, 19);



    /*teste.putVoxel();
    teste.cutVoxel();

    teste.putBox();
    teste.cutBox();

    teste.putSphere();
    teste.cutSphere();

    teste.putEllipsoid();
    teste.putEllipsoid();*/

    teste.writeOFF("ellipsoid.off");

    return 0;
}
