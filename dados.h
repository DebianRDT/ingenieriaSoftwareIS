#ifndef DADOS_H
#define DADOS_H

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <list>

using namespace std;


class Dados
{
private:
    int dado_, caras_;
    list<int> _tiradas;



 public:

    Dados(int caras);
    void lanzarDado(int cantidad);
    list<int> listaTiradas();

};

#endif
