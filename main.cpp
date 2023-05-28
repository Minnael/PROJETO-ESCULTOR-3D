#include <iostream>
#include <fstream>
#include "sculptor.h"

int main(){
    Sculptor teste(100, 100, 100);

    //DEFININDO UM CUBO SIMPLES
    teste.setColor(0, 1, 0, 1);
    teste.putBox(35, 65, 60, 90, 35, 65);
    //DEFININDO UM CORTE DENTRO DO CUBO
    teste.cutBox(36, 64, 61, 89, 36, 64);


    //DEFININDO VOXEL´S SIMPLES
    teste.setColor(1, 0, 0, 1);
    teste.putVoxel(50, 75, 50);

    teste.setColor(0, 1, 0, 1);
    teste.putVoxel(51, 75, 50);

    teste.setColor(0, 0, 1, 1);
    teste.putVoxel(49, 75, 50);

    teste.setColor(1, 1, 0, 1);
    teste.putVoxel(52, 75, 50);

    teste.setColor(0, 1, 1, 1);
    teste.putVoxel(48, 75, 50);

    teste.setColor(1, 0, 1, 1);
    teste.putVoxel(53, 75, 50);

    teste.setColor(1, 1, 1, 1);
    teste.putVoxel(47, 75, 50);

    teste.setColor(0, 0, 0, 1);
    teste.putVoxel(50, 76, 50);

    //UTILIZANDO A EXCLUSÃO DE UM VOXEL
    teste.setColor(1, 0, 0, 1);
    teste.putVoxel(46, 50, 50);
    teste.cutVoxel(46, 50, 50);


    //DEFININDO UMA ESFERA BÁSICA
    teste.setColor(0, 0, 1, 1);
    teste.putSphere(85, 75, 50, 15);
    //DEFININDO UM CORTE DENTRO DA ESFERA
    teste.cutSphere(85, 75, 50, 14);


    //DEFININDO UM ELIPSOIDE SIMPLES
    teste.setColor(1, 0, 0, 1);
    teste.putEllipsoid(14, 75, 50, 15, 15, 25);
    //DEFININDO UM CORTE DENTRO DE UM ELIPSOIDE
    teste.cutEllipsoid(14, 75, 50, 14, 14, 24);


    teste.writeOFF("teste.off");

    return 0;
}
