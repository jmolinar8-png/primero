#include <iostream>
#include "Calculadora.h"
using namespace std;

int main()
{
    float valor1;
    float valor2;
    char repetir;
  do {
    cout <<"Ingresa el primer valor: "<< endl;
    cin >> valor1;

    cout <<"Ingresa el segundo valor: "<< endl;
    cin >> valor2;

    Calculadora Calc1;
    float Resultado =0.00;
    Resultado = Calc1.Suma(valor1, valor2);
    float Resultado2 =0.00;
    Resultado2 = Calc1.Resta(valor1,valor2);
    float Resultado3 =0.00;
    Resultado3 = Calc1.Multiplicacion(valor1, valor2);
    float Resultado4 = 0.00;
    Resultado4 = Calc1.Division(valor1,valor2);

    cout << "El Resultado de la suma es: " << Resultado << endl;
    cout << "El Resultado de la resta es: " << Resultado2 << endl;
    cout << "El Resultado de la multiplicacion es: " << Resultado3 << endl;
    cout << "El Resultado de la division es: " << Resultado4 << endl;
    cout << " Si deseas repetir las operaciones dale 's' o 'S': " << endl;
    cin >> repetir;
    }

    while(repetir =='s'||repetir =='S');
    return 0;
}
