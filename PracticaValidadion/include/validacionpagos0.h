#ifndef VALIDACIONPAGOS0_H
#define VALIDACIONPAGOS0_H
#include <string>
#include <vector>


class validacionpagos0
{
    public:
        //declaracion de metodos para cursos y precios
        validacionpagos0();
        void asignarCursos(string nombrecurso, double preciocurso){}
        void informaciondecursos(){}
        virtual ~validacionpagos0();

    protected:

    private:
        vector<string>cursos;
        vector<double>precios;

        double pagototal;
        double pagoalumno;
};

#endif // VALIDACIONPAGOS0_H
