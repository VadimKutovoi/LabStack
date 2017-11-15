#include "TCalculator.h"

void TCalculator::SetInf(string str)
{
	inf = str;
}

string TCalculator::GetPost()
{
	return post;
}

int TCalculator::StCheck()
{
	for(int i = 0; i < inf.size(); i++)
	{
		if(inf[i]=='(') StC.Push('(');
		if(inf[i]==')') 
		{
			if(StC.IsEmpty()) return 0;
			else StC.Pop();
		}
		if(StC.IsEmpty()) return 1;
		else return 0;
	}
}

int TCalculator::Prty(char c)
{
	switch(c)
	{
	case '(': return 0;
	case ')': return 0;
	case '+': return 1;
	case '-': return 1;
	case '*': return 2;
	case '/': return 2;
	case '^': return 3;
	}
}

void TCalculator::ToPost()
{
	StC.Clr();

	string buf = '(' + inf + ')';

	for(int i = 0; i < buf.size(); i++)
	{
		if(buf[i] == '(') StC.Push('(');
		if(((buf[i] >= '0'|| buf[i] <= '9')) || buf[i] == '.') post+=buf[i]; 
		if(buf[i] == ')')
		{
			char el = StC.Pop();

			while(el != '(')
			{
				post += el;
				el = StC.Pop();
			}
		}
		if(buf[i] == '+' || buf[i] == '-' || buf[i] == '*' || buf[i] == '/' || buf[i] == '^')
		{
			post += " ";

			while(Prty(buf[i]) <= Prty(StC.Top()))
			{
				post += StC.Pop();
			}
		}
		StC.Push(buf[i]);
	}
}

double TCalculator::Calcucate()
{
	StD.Clr();

	for(int i = 0; i < post.size(); i++)
	{
		if(post[i] == '+' || post[i] == '-' || post[i] == '*' || post[i] == '/' || post[i] == '^')
		{
			double op1, op2, res;

			op2 = StD.Pop();
			op1 = StD.Pop();

			switch (post[i])
			{
			case '+': res = op1 + op2;
	        case '-': res = op1 - op2;
	        case '*': res = op1 * op2;
	        case '/': res = op1 / op2;
			case '^': res = pow(op1, op2);
			}
			StD.Push(res);
		}

		if(post[i] >= '0' && post[i] <= '9' || post[i] == '.')
		{
			char *tmp;
			double res = strtod(&post[i], &tmp);
			int j = tmp - &post[i];
			
			i += j - 1;
			StD.Push(res);
		}
	}
	return StD.Pop();
}