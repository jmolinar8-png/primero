#ifndef VALIDACIONPAGOS0_H
#define VALIDACIONPAGOS0_H
#include<string>
#include<vector>


class validacionpagos0
{
    public:
        //declaracion de metodos para cursos y precios
        validacionpagos0();
        void asignarCursos(std::string nombrecurso, double preciocurso);
        void informaciondecursos();
        virtual ~validacionpagos0();

    protected:

    private:
        std::vector<std::string>cursos;
        std::vector<double>precios;

        double pagototal;
        double pagoalumno;
};

#endif // VALIDACIONPAGOS0_H
