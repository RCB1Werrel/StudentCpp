#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
float check(float f)
{

	cin >> f;
	while (cin.fail())
	{
		cout << "Nice try,but we can't work with that.";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> f;

	}

	return f;
}
int calc()
{
	float a, b, q, f = 0;
	int c;
	double s, k = 0;
	cout << "Hello my dear. What are the numbers?" << endl;
	a = check(f);
	b = check(f);
	cout << "Number 1:" << a << endl << "Number 2:" << b << endl << "What do you want to do ?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "5.^2" << endl << "6.√" << endl << "7.log" << endl;
retry:
	c = check(f);
	cout << "Your answer:" << c << endl;
	switch (c)
	{
	case 1:
	{
		s = a + b;
		break;
	}
	case 2:
	{
		s = a - b;
		break;
	}
	case 3:
	{
		s = a * b;
		break;
	}
	case 4:
	{
		if (b == 0)
		{
			cout << "I can't do this!" << endl;
			goto bad_try;
		}
		s = a / b;
		break;
	}
	case 5:
	{
		s = pow(a, 2);
		k = pow(b, 2);
		break;
	}
	case 6:
	{
		s = sqrt(a);
		k = sqrt(b);
		break;
	}
	case 7:
	{
		cout << "What log are you want?" << endl;
		q = check(f);
		s = log(a) / log(q);
		k = log(b) / log(q);
		break;
	}
	default:
	{
		cout << "Wrong input.Try again!";
		goto retry;
	}
	}
	if (k == 0)
	{
		cout << "Result=" << s << endl;
	}
	else
	{
		cout << "Result = " << s << ";" << k << endl;
	}
	bad_try:
	return(1);
}

int main(int argc, char argv[])
{
	char r;
start:
	calc();
	cout << "Do you want to try again? y/n" << endl;
	cin >> r;
	if (r == 'y')
	{
		goto start;
	}
	system("pause");
}
