#include <iostream>
#include "DivideByZeroException.h"

using namespace std;

int main()
{
    int number1; // user-specified numerator
    int number2; // user-specified denominator

    cout << "Enter two integers (end-of-file to end): ";

// enable user to enter two integers to divide

    while (cin >> number1 >> number2) {

// try block contains code that might throw exception

// and code that will not execute if an exception occurs

    try {

    double result= quotient (number1, number2);

    cout << "The quotient is: "<< result << endl;
}

    catch (const DivideByZeroException& divideByZeroException) {

    cout << "Exception occurred: "
    << divideByZeroException.what() << endl;
}

    cout << "\nEnter two integers (end-of-file to end): ";
}

    cout << endl;
}

