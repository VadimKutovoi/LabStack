#include "TStack.h"

TStack::TStack(int _MaxSize){
	MaxSize = _MaxSize;
	Size = 0;
	Mas = new T[MaxSize];
}