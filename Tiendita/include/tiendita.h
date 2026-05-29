#ifndef TIENDITA_H
#define TIENDITA_H
#include <iostream>
#include <string>
using namespace std;

class tiendita
{
    public:
        void menu();
        void insertar();
        void leer();
        void modificar();
        void borrar();
        tiendita();
        virtual ~tiendita();

    protected:

    private:
        string id, productoN;
        double precio;

};

#endif // TIENDITA_H
