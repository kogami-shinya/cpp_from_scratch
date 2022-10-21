#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double X[5] = { 0.0, 1.0, 2.0, 3.0, 4.0 };
    double Y[5] = { 0.0, 1.0, 1.4142, 1.7321, 2.0 };
    double x_0 = 2.0;
    int int_x_0 = (int)x_0;
    int h = 0;

    //left
    int index = X[int_x_0];
    h = abs(X[index] - X[index - 1]);

    double deribative_one_left = (double)(Y[index] - Y[index - 1]) / h;
    cout << deribative_one_left <<"\t";

    double deribative_two_left = (Y[index] - 2 * Y[index - 1] + Y[index - 2]) / (h * h);
    cout << deribative_two_left;

    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();

    return 0;
}