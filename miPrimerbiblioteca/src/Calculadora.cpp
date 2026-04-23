#include "Calculadora.h"

Calculadora::Calculadora()
{
    //ctor
}

float Calculadora::Suma(int valor1, int valor2)
{
    return valor1 + valor2;
}
float Calculadora::Resta(int valor1, int valor2)
{
    return valor1 - valor2;
}
float Calculadora::Multiplicacion(int valor1, int valor2)
{
    return valor1 * valor2;
}
float Calculadora::Division(float valor1, float valor2)
{
    return valor1 / valor2;
}
