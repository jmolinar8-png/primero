#include <iostream>
using namespace std;

//funcion que recibre un arreglo
void imprimir(int arr[], int tamano){
    for(int i = 0; i < tamano; i++)
    {
        cout << arr[i]<< endl;
    }
}

int main(){
    int numeros[5] = {1,2,3,4,5};
    imprimir(numeros, 5); //pasamos el arreglo
    return 0;
}

