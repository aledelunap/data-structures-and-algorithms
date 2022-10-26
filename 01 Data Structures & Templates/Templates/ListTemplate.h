// =================================================================
//
// File: List.h
// Description: This file contains the implementation of the
//				List class template.
//
// =================================================================
#ifndef LISTTEMPLATE_H
#define LISTTEMPLATE_H

const int MAX = 100;

template <class T>
class List
{
public:
  List();
  void insert(T d);
  void erase();
  T getData(int pos);
  int getSize();
  void print();

private:
  T data[MAX];
  int size;
};

// =================================================================
// Constructor. Initiates List of type T size to 0.
// =================================================================
template <class T>
List<T>::List()
{
  size = 0;
}

// =================================================================
// Inserts an element of type T at the end of the List.
// =================================================================
template <class T>
void List<T>::insert(T ele)
{
  if (size >= MAX)
    cout << "List is full, element not saved." << endl;
  else
    data[size++] = ele;
}

// =================================================================
// Erases the last element of type T at the end of the List.
// =================================================================
template <class T>
void List<T>::erase()
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
template <class T>
T List<T>::getData(int pos)
{
  return data[pos];
}

// =================================================================
// Returns the size of the List.
// =================================================================
template <class T>
int List<T>::getSize()
{
  return size;
}

// =================================================================
// Print the elements of the List.
// =================================================================
template <class T>
void List<T>::print()
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

#endif /* LISTTEMPLATE_H */