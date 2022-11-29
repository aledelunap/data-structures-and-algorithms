// =======================================================================
//
// File: factorial.cpp
// Description: This file contains an iterative and a recursive
//				implementation of the factorial function.
//
// =======================================================================

#include <iostream>
using namespace std;

// =======================================================================
// iterativePower: Calculates, iteratively, the factorial of a number.
// =======================================================================
int iterativePower(int number, int power)
{
    int apow = 1;

    /* number^power = number * number * ... * number */
    for (int i = 1; i <= power; i++)
    {
        apow *= number;
    }

    return apow;
}

// =======================================================================
// recursivePower: Calculates, recursively, the factorial of a number.
// =======================================================================
int recursivePower(int number, int power)
{
    /* Base case */
    if (power == 0)
        return 1;

    /* Revursive call */
    return number * recursivePower(number, power - 1);
}

int main()
{
    int n, p;
    cout << "Ingresa un número y una potencia para calcular el resultado: ";
    cin >> n;
    cin >> p;

    cout << "El factorial de " << n << " calculado iterativamente es: " << iterativePower(n, p) << endl;

    cout << "El factorial de " << n << " calculado recursivamente es: " << recursivePower(n, p) << endl;

    return 0;
}