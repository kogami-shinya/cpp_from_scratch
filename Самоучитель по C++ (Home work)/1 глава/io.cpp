#include <iostream>
using namespace std;


int readNumber()
{
    cout << "������� ����� ����� �����: ";
    int x;
    cin >> x;
    return x;
}

void writeAnswer(int sum)
{
    cout << "x + y = " << sum;
}
