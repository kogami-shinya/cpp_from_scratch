#include <iostream>
#include "io.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    int x, y;
    x = readNumber();
    y = readNumber();
    writeAnswer(x + y);

    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();
    return 0;
}
