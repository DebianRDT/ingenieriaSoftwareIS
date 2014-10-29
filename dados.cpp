#include "dados.h"
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <string>
#include <list>

using namespace std;

Dados::Dados(int caras)
{
   srand(time(NULL));
   caras_=caras;
}

void Dados::lanzarDado(int cantidad) {
    int i;
    for (i=0; i<cantidad; i++) {
       dado_=1+rand()%(caras_);
        _tiradas.push_back(10);
    }
}

list<int> Dados::listaTiradas() {
    return _tiradas;
}
