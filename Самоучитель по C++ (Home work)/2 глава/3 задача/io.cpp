#include <iostream>
using namespace std;

double getNum()
{
	setlocale(LC_ALL, "ru");
	double x;
	cout << "Enter a double value:" << endl;
	cin >> x;
	return x;
}
double getMath()
{
	cout << "Enter one the following: +, - , * or /: ";
	char a;
	cin >> a;
	int i(a);
	if (i == 43 || i == 42 || i == 45 || i ==47)
	{
		return i;
	}
	else
	{
		cout << "Error" << endl;
		return 0;
	}
}
double getRes(double x,double y,double a)
{
	if (a == 43)
	{
		cout << x << " + " << y << " = ";
		return x + y;
	}
	else if (a == 45)
	{
		cout << x << " - " << y << " = ";
		return x - y;
	}
	else if (a == 42)
	{
		cout << x << " * " << y << " = ";
		return x * y;
	}
	else if (a == 47)
	{
		if (x == 0)
		{
			cout << "Not zero pleas!" << endl;
			return 0;
		}
		else if (y == 0)
		{
			cout << "Not zero pleas!" << endl;
			return 0;
		}
		else
		{
			cout << x << " / " << y << " = ";
			return x / y;
		}
	}
	else
	{
		cout << "Error" << endl;
		return 0;
	}
}