#include "pch.h"

#include <iostream>
using namespace std;
int main(int argc, char argv[])
{
	int a, b, c, s,k;
	char r;
	label:
	cout << "Hello, my dear. What are the numbers?" << endl;
	cin >> a;
	cin >> b;
	cout << "Number 1:" << a << endl;
	cout << "Number 2:" << b << endl;
	cout << "What do you want to do ?" << endl;
	cout << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "5.^2" << endl<< "6.√" <<endl << "7.log" <<endl ;
	cin >> c;
	cout << "Your answer:" << c << endl;
	switch (c)
	{
	case 1:
	{
		s = a + b;
		cout << "Result = " << s << endl;
		
	}
	case 2:
	{
		s = a - b;
		cout << "Result = " << s << endl;
		
	}
	case 3:
	{
		s = a * b;
		cout << "Result = " << s << endl;
		
	}
	case 4:
	{s = a / b;
	cout << "Result = " << s << endl;
	
	}
	case 5:
	{
		s = pow(a,2);
		k = pow(b, 2);
		cout << "Result = " << s <<";"<<k<< endl;

	}
	case 6:
	{
		s = sqrt(a);
		k = sqrt(b);
		cout << "Result = " << s <<";"<< k<< endl;
	}
	case 7:
	{
		cin >> n;
		s =logn(a);
		k = logn(b);
		cout << "Result = " << s << ";" << k << endl;
	}
	cout << "Do you want to try again? y/n" << endl;
	cin >> r;
	if (r == 'y')
	{
		goto label;
	}
	system("pause");
	return 1;
	}
}