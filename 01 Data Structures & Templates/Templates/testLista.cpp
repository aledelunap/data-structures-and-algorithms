#include <iostream>
using namespace std;

#include "ListTemplate.h"

int main()
{
    List<int> miLista1;
    miLista1.print();
    miLista1.insert(20);
    miLista1.insert(15);
    miLista1.insert(30);
    miLista1.print();
    miLista1.erase();
    miLista1.print();
    cout << "Elemento " << miLista1.getData(3);
    cout << miLista1.getSize() << endl;

    List<string> miLista2;
    miLista2.insert("Hola");
    miLista2.insert("Martes");
    miLista2.print();
    cout << miLista2.getSize() << endl;

    return 0;
}