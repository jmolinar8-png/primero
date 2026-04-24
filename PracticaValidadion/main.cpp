#include <iostream>
#include "validacionpagos0.h"
using namespace std;

int main()
{
    double programacion1 = 150.00;
    double fisica=200.00;
    double procesosadministrativos=200.00;
    double calculo=200.00;
    double derechoinformatico=200.00;
    double resultado;
    double pagoalumno;

    validacionpagos0 asignaciones; //primer objeto de la clase
    // se usan las funciones en los objetos
    asignaciones.asignarCursos("programacion 1", programacion1);
    asignaciones.asignarCursos("Fisica 1", fisica);
    asignaciones.asignarCursos("Procesos administrativos", procesosadministrativos);
    asignaciones.asignarCursos("Calculo 1", calculo);
    asignaciones.asignarCursos("Derecho informatico", derechoinformatico);
    asignaciones.informaciondecursos();

    resultado = programacion1 + fisica + procesosadministrativos + calculo + derechoinformatico;
    cout << endl << "Total a pagar es de: Q" << resultado << endl;
    cout << "Puedes pagar de la manera que prefieras, ingresa tu pago: " << endl;
    cin >> pagoalumno;
    asignaciones.pagoAlumno1(pagoalumno, resultado);


    return 0;
}
