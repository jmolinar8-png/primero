#include "DivideByZeroException.h"
#include <iostream>
using namespace std;

// perform division and throw DivideByZeroException object if
// divide-by-zero exception occurs

double quotient(int numerator, int denominator) {
// throw DivideByZeroException if trying to divide by zero

if (denominator == 0) {
throw DivideByZeroException{}; // terminate function
}

// return division result
return static_cast<double>(numerator) / denominator;
}
