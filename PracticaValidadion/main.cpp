#include <iostream>
#include "validacionpagos0.h"
using namespace std;

int main()
{
    validacionpagos0 asignaciones; //primer objeto de la clase
    // se usan las funciones en los objetos
    asignaciones.asignarCursos("programacion 1", 150.0);
    asignaciones.asignarCursos("Fisica 1", 200.0);
    asignaciones.informaciondecursos();

    return 0;
}
