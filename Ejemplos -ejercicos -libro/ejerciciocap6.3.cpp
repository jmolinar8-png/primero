#include <iostream>
using namespace std;

int main(){
    int matriz[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    // recorrer filas y columnas
    for(int i=0; i <3; i++){
        for(int j=0; j<4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
    }
