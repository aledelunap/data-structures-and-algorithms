#include <iostream>
using namespace std;

#include "List.h"

int main()
{
	List myList;
	myList.print();
	myList.insert(154);
	myList.insert(587);
	myList.insert(874);
	cout << "The List has: " << myList.getSize() << " elements." << endl;
	myList.insert(1000);
	myList.insert(9999);
	cout << "The List has: " << myList.getSize() << " elements." << endl;
	cout << "We will erase the last element, which was: ";
	myList.erase();
	int cant = myList.getSize();
	cout << "The list elements are: " << endl;
	myList.print();
	cout << "Erasing all elements: " << endl;
	for (int i = 0; i < cant; i++)
	{
		myList.erase();
	}
	return 0;
}