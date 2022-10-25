#include <iostream>
using namespace std;


int readNumber()
{
    cout << "¬ведите любое целое число: ";
    int x;
    cin >> x;
    return x;
}

void writeAnswer(int sum)
{
    cout << "x + y = " << sum;
}
