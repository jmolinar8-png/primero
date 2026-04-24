#include <iostream>
using namespace std;

int main(){
    int estudiantes = 3;
    int notas = 3;

     int matriz [3][3];

     //ingresar datos
     for(int i=0; i < estudiantes; i++){
        cout <<"Estudiante" << i+1 << endl;
        for(int j=0; j < notas; j++){
            cout << "ingrese nota " << j+1<< ": ";
            cin >> matriz[i][j];
        }
     }

     cout << "\n--- RESULTADOS ---\n";

     for(int i =0; i< estudiantes; i ++){
        int suma = 0;

        cout <<"Estudiante  " << i +1 << ": ";
        for(int j=0; j < notas; j++){
            cout << matriz[i][j] << " ";
            suma += matriz[i][j];
        }
        float promedio = suma / (float)notas;
        cout << " | promedio: " <<promedio << endl;
     }
     return 0;
}
