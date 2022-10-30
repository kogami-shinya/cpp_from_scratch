#include <iostream>
#include "constans.h"

using namespace std;
double form(int x);

double metr() {
	double x;
	cout << "Enter the initial height of the tower in meter: ";
	cin >> x;
	return x;
}

double res(double z)
{
	double metr;
	metr = z;
	if (z > 0)
	{
		cout << "At 0 seconds, the ball is at height: " << z << endl;
		metr = z - form(1);
		if (metr >= 0)
		{
			cout << "At 1 seconds, the ball is at height: " << metr << endl;
			metr = z - form(2);
			if (metr >= 0)
			{
				cout << "At 2 seconds, the ball is at height: " << metr << endl;
				metr = z - form(3);
				if (metr >= 0)
				{
					cout << "At 3 seconds, the ball is at height: " << metr << endl;
					metr = z - form(4);
					if (metr >= 0)
					{
						cout << "At 4 seconds, the ball is at height: " << metr << endl;
						metr = z - form(5);
						if (metr >= 0)
						{
							cout << "At 5 seconds, the ball is at height: " << metr << endl;
							return 0;
						}
						else
						{
							cout << "At 5 seconds, the ball is on the ground." << endl;
						}
					}
					else
					{
						cout << "At 4 seconds, the ball is on the ground." << endl;
					}
				}
				else
				{
					cout << "At 3 seconds, the ball is on the ground." << endl;
				}
			}
			else
			{
				cout << "At 2 seconds, the ball is on the ground." << endl;
			}
		}
		else
		{
			cout << "At 1 seconds, the ball is on the ground." << endl;
		}
	}
	else if (z == 0)
	{
		cout << "At 0 seconds, the ball is on the ground." << endl;
	}
	else
	{
		cout << "Error" << endl;
		return 0;
	}
	return 0;
}
double form(int x)
{
	return myConstants::earthGravity * ( x * x ) / 2;
}

