//programa que realice la suma de los cuadrado de los primeros 10 enteros mayores que  cero

#include<iostream>

using namespace std;

int main(){
int suma = 0;
int cuadrado = 0;

for(int i=1;i<=10;i++){
    cuadrado = i *i;
    suma += cuadrado;
}

cout <<"el resultado de la suma es: "<<suma<<endl;

return 0;
}
