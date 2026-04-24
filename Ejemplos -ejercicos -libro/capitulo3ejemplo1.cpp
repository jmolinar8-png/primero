#include <iostream>
#include <string>
using namespace std;
class LibroCalificaciones

{
public:
// funcion que muestra un mensaje de bienvenida para el usuario de librocalificaciones
    void mostrarMensaje(string nombreCurso)const
    {
        cout <<"Bienvenido al libro de calificaciones para\n" << nombreCurso<< "!" << endl;

    }// fin de la funcion mostrarMensaje

};
// fin de la clase LibroCalificaciones
// la funcion main empieza la ejecucion de programa
 int main()
 {
     string nombreDelCurso; // cadena de caracteres que almacena el nombre del curso
     LibroCalificaciones miLibroCalificaciones;
//crea un objeto librocalificaciones llamado mi librocalificaciones
//pide y recibe el nombre delcurso como entrada
     cout <<"escriba el nombre del curso: " << endl;
     getline( cin,nombreDelCurso);
     // lee el nomnre de un curso con espacios en blanco
     cout << endl; // impreme una linea en blanco

     //llama a la funcion mostrarmensaje de milibrocalificaciones
     //y pasa nombredelcurso como argumento
     miLibroCalificaciones.mostrarMensaje(nombreDelCurso);
 }




