//Escrina un programa que calcule X elevado a y, donde tanto x and y son enteros, sin utilizar la funcion pow
#include<iostream>

using namespace std;

int main(){

int base = 0;
int exponente = 0;
int resultado = 1;
 cout<<"Ingrese la base: ";
 cin >> base;
 cout<<"ingrese el exponente: ";
 cin >> exponente;

 if(exponente ==0){
 resultado= 1;
  } else {
      for(int i=0;i<y; i++){
    resultado *= base;
 }
 }
 cout << base <<"elevado a la" << exponente <<" es: " << resultado <<endl;


return 0;
}
