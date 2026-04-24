#include<iostream>
using namespace std;


class Persona {
public:
Persona(){}
Persona (string pNombre, string pApellido)
{
    Nombre = pNombre;
    Apellido = pApellido;
}
string getNombre()
{
    return Nombre;
}
void setNombre()
{
    Nombre = pNombre;
}
string getApellido()
{
    return Apellido;
}
void setApellido()
{
    Apellido = pApellido
}

private
string Nombre;
string Apellido;

};

int main()
{
    Persona persona1;
    persona1.setNombre("Josue");
    persona1.setApellido("Molina");
    Persona persona2;
    persona2.setNombre("Carlos");
    persona2.setApellido("Herrera");
    cout << "La primera persona se llama: " << persona1.getNombre()<< " " << persona1.getApellido();
    count << "La segunda persona se llama: " << persona2.getNombre()<< " " << persona2.getApellido();
    return 0;
}
