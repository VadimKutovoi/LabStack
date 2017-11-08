#include "..\TStack\TStack.h"
#include <string>

using namespace std;

class TCalculator
{
string inf;
string post;

TStack<char> StC;
TStack<double> StD;

public:
void SetInf(string str);
string GetPost();
int StCheck();
int Prty(char c);
void ToPost();
double Calcucate();
};