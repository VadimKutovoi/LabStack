#include "..\TStack\TCalculator.h"
#include <iostream>
void main()
{
	TCalculator clc;

	clc.SetInf("2+2*2");
	clc.ToPost();
	cout << clc.Calcucate();
}