//comparacion de enteros mediante instrucciones if, operadores
#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int numero1 = 0; //primer entero a comparar
    int numero2= 0;

    cout <<"Escriba dos enteros a comparar: ";
    cin >> numero1 >> numero2;

    if (numero1 == numero2)
       cout <<numero1 <<"==" << numero2 << endl;
    if (numero1 != numero2 )
        cout << numero1 << "!=" << numero2 << endl;
    if (numero1 < numero2 )
        cout << numero1 <<"<" << numero2 << endl;
    if (numero1 > numero2 )
       cout << numero1 <<" >" << numero2 << endl;
    if (numero1 <= numero2)
        cout << numero1 << "<=" <<numero2 << endl;
    if (numero1 >= numero2)
        cout << numero1 <<">=" <<numero2 << endl;
}
