#include "TStack.h"

template <class T>
TStack<T>::TStack(int _MaxSize)
{
	MaxSize = _MaxSize;
	Mas = new T[MaxSize];
	Size = 0;
}

template <class T>
TStack::TStack()
{
	delete[] Mas;
}

template <class T>
T TStack<T>::TStack Pop()
{
	if(IsEmpty()) throw 0;

	Size--;
	return Mas[Size];
}

template <class T>
T TStack<T>::TStack Top()
{

}

template <class T>
void TStack<T>::TStack Push(T a)
{

}

template <class T>
int TStack<T>::TStack IsEmpty()
{
	if(Size == 0) return 1;
	else return 0;
}

template <class T>
int TStack<T>::TStack IsFull()
{
	return (Size == MaxSize);
}