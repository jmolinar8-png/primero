#include "validacionpagos0.h"
#include <string>
#include <iostream>
using namespace std;


validacionpagos0::validacionpagos0()
{
    //ctor
}

void  validacionpagos0::asignarCursos(std::string nombrecurso, double preciocurso)
{
    cursos.push_back(nombrecurso);
    precios.push_back(preciocurso);
}

 void validacionpagos0::informaciondecursos()
{
     cout<< "--- Lista de cursos y precios---" << endl;
    for(int i = 0; i < cursos.size(); i++){
        cout<< i+1 <<"."<<cursos[i]<<"-Precio: Q" << precios[i] << endl;
    }
}

validacionpagos0::~validacionpagos0()
{
    //dtor
}
