#ifndef DIVIDEBYZEROEXCEPTION_H
#define DIVIDEBYZEROEXCEPTION_H
#include <stdexcept>

class DivideByZeroException: public std:: runtime_error {

public:

// constructor specifies default error message

DivideByZeroException()
    : std:: runtime_error{"attempted to divide by zero"} {}

 };
 double quotient(int numerator, int denominator);
#endif // DIVIDEBYZEROEXCEPTION_H
