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
// iterativeFactorial: Calculates, iteratively, the factorial of a number.
// =======================================================================
int iterativeFactorial(int number)
{
    int acum = 1;

    /* Facotrial 1 * 2 * ... *(number -1) * number */
    for (int i = 1; i <= number; i++)
    {
        acum *= i;
    }

    return acum;
}

// =======================================================================
// resursiveFactorial: Calculates, recursively, the factorial of a number.
// =======================================================================
int resursiveFactorial(int number)
{
    /* Base case */
    if (number == 0)
        return 1;

    /* Revursive call */
    return number * resursiveFactorial(number - 1);
}

int main()
{

    cout << "El factorial de " << 5 << " calculado iterativamente es: " << iterativeFactorial(5) << endl;

    cout << "El factorial de " << 5 << " calculado recursivamente es: " << resursiveFactorial(5) << endl;

    return 0;
}