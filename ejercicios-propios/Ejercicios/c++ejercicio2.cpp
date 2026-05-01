//Preincremento y postincremento
#include <iostream>
using namespace std;
int main()
{
    //demuestra el postincremento
    int c= 5; //asigna 5 a c
    cout << c << endl; //impre 5
    cout << c++ << endl; //impre 5 y despues postincrementa
    cout << c << endl; //impre 6
    cout << endl; //salta una linea

    // demuestra el preincremento
    c = 5; //asigna 5 a c
    cout << c << endl; // imprime 5
    cout << ++c << endl; // preincrementa y despues imprime 6
    cout << c << endl; //impre 6
    //fin de main
}
