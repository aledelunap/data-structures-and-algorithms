// =======================================================================
//
// File: fibonacci.cpp
// Description: This file contains an iterative and a recursive
//				implementation of the fibonacci function.
//              F(0) = F(1)  = 1
//              F(n) = F(n-1) + F(n-2)
//
// =======================================================================

#include <iostream>
using namespace std;

// =======================================================================
// iterativeFibonacci: Calculates, iteratively, the fibonacci sequence of
//                     a number.
// =======================================================================
int iterativeFibonacci(int number)
{
    int fib1 = 1, fib2 = 1;
    int fib3;

    for (int i = 3; i <= number; i++)
    {
        fib3 = fib1 + fib2;
        /* Siguiente sera fib3 + fib2 */
        fib1 = fib2;
        fib2 = fib3;
    }

    return fib3;
}

// =======================================================================
// recursiveFibonacci: Calculates, recursively, the fibonacci sequence of
//                     a number.
// =======================================================================
int recursiveFibonacci(int number)
{
    /* Base case */
    if (number == 1 || number == 2)
        return 1;
    /* Recursive call */
    return recursiveFibonacci(number - 1) + recursiveFibonacci(number - 2);
}

int main()
{
    int n;
    cout << "Ingresa un número para calcular su secuencia de Fibonnaci: ";
    cin >> n;

    cout << "La secuencia de Fibonacci de " << n << " calculado iterativamente es: " << iterativeFibonacci(n) << endl;

    cout << "El factorial de " << n << " calculado recursivamente es: " << recursiveFibonacci(n) << endl;

    return 0;
}