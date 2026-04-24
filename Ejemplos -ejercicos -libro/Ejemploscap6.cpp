#include <iostream>
#include <string>

using namespace std;
//molde o plantilla
template <typename T>
void intercambiar(T &a, T &b){
    T temporal = a;
    a = b;
    b = temporal;

}

int main(){
int x = 10, y = 20;
intercambiar(x, y);
// ahora x vale 20 y y vale 10

// ejempllo con texto
string nombre1 = "Mundo", nombre2= "Hola";
 intercambiar(nombre1, nombre2);
//Ahora nombre1 vale "hola" y nombre2 vale "mundo"
return 0;
}
