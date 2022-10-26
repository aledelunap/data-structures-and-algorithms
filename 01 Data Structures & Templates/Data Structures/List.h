// =================================================================
//
// File: List.h
// Description: This file contains the implementation of the
//				List class.
//
// =================================================================

#ifndef LIST_H
#define LIST_H

const int MAX = 100;

class List
{
public:
	List();
	void insert(int ele);
	void erase();
	int getData(int pos);
	int getSize();
	void print();

private:
	int data[MAX];
	int size;
};

// =================================================================
// Constructor. Initiates List of type int to size 0.
// =================================================================
List::List()
{
	size = 0;
}

// =================================================================
// Inserts an element of type int at the end of the List.
// =================================================================
void List::insert(int ele)
{
	if (size >= MAX)
		cout << "List is full, element not saved." << endl;
	else
		data[size++] = ele;
}

// =================================================================
// Erases the last element at the end of the List.
// =================================================================
void List::erase()
{
	if (size > 0)
	{
		size--;
		cout << "[" << size << "] - " << data[size] << endl;
	}
	else
	{
		cout << "There are no elements to earase." << endl;
	}
}

// =================================================================
// Returns the element at a certain position.
// Precondition: The position does not exceeds the size of the array.
// =================================================================
int List::getData(int pos)
{
	return data[pos];
}

// =================================================================
// Returns the size of the List.
// =================================================================
int List::getSize()
{
	return size;
}

// =================================================================
// Print the elements of the List.
// =================================================================
void List::print()
{
	if (size == 0)
		cout << "No elements to print." << endl;
	else
	{
		for (int i = 0; i < size; i++)
		{
			cout << "[" << i << "] - " << data[i] << endl;
		}
	}
}

#endif /* LIST_H */