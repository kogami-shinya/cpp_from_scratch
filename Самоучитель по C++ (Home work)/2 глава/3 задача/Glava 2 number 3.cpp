#include <iostream>
#include "io.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    double x, y ,mat;
    x = getNum();
    y = getNum();
    mat = getMath();
    cout<< getRes(x, y, mat);

    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();
    return 0;
}