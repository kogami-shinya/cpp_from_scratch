#include <iostream>
using namespace std;

int getUsingInput()
{
	cout << "pleas enter an integer: ";
	int x;
	cin >> x;
	return x;
}

int getMatemOperation()
{
	cout << "Please enter whith operator you want (1 = +, 2 = -, 3 = *,4 = /): ";
	int op;
	cin >> op;
	return op;
}

int calculateResult(int x, int op, int y)
{
	if (op == 1)
	{
		return x + y;
	}
	if (op == 2)
	{
		return x - y;
	}
	if (op == 3)
	{
		return x * y;
	}
	if (op == 4)
	{
		return x / y;
	}
}

void printResult(int result)
{
	cout << "Your result is: " << result << endl;
}