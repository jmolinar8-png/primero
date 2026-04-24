#include<iostream>
 using namespace std;


void Calculo (int& x)
{
    x = x + 10;
    cout <<"valor de x: " <<x << endl;

}

int main()
{
    int x=20;
    Calculo(x);
    cout << x << endl;

}
