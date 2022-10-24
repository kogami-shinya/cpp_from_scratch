#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    int input1 = getUsingInput();
    int op = getMatemOperation();
    int input2 = getUsingInput();
    int result = calculateResult(input1,op,input2);
    printResult(result);

    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();

    return 0;
}