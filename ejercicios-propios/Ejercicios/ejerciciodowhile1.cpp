//0lgoritmo que lea valores enteros hasta que se introduzca un valor en el rango (20-30)
//o se introduzcan el valor 0. El programa debe entregar la sima de los valores mayores 0 introducidos

#include<iostream>
using namespace std;

int main(){
int numero=0;
int suma = 0;

do{
    cout<<"Digite un numero: ";
    cin>> numero;

    if(numero>0)
        suma += numero;
} while((numero<20)||(numero>30)&&(numero !=0));

cout<<"\nLa suma es: "<<suma<<endl;
return 0;
}
