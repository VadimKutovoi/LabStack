#include "..\TStack\TCalculator.h"
#include <iostream>

void main()
{
	TCalculator clc;
	string data;

	cout << "Enter expression" << endl;
	cin >> data;

	clc.SetInf(data);
	clc.ToPost();
	cout << clc.Calcucate() << endl;
}