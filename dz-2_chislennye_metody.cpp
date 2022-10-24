#include <iostream>
#include <cmath>
using namespace std;

void left_deribative()
{
    int hl = 0;
    double Y[5] = { 0.0, 1.0, 1.4142, 1.7321, 2.0 };
    double X[5] = { 0.0, 1.0, 2.0, 3.0, 4.0 };
    double x_0 = 2.0;
    int int_x_0 = (int)x_0;
    int index = X[int_x_0];
    hl = abs(X[index] - X[index - 1]);

    double deribative_one_left = (double)(Y[index] - Y[index - 1]) / hl;
    double deribative_two_left = (Y[index] - 2 * Y[index - 1] + Y[index - 2]) / (hl * hl);

    cout << "right (" << deribative_one_left << " ";
    cout << deribative_two_left << ")" << endl;
}

void center_deribative()
{
    int hc = 0;
    double Y[5] = { 0.0, 1.0, 1.4142, 1.7321, 2.0 };
    double X[5] = { 0.0, 1.0, 2.0, 3.0, 4.0 };
    double x_0 = 2.0;
    int int_x_0 = (int)x_0;
    int index = X[int_x_0];
    hc = abs(X[index] - X[index + 1]);

    double deribative_one_center = (Y[index - 1] - Y[index + 1]) / (2 * hc);
    double deribative_two_center = (Y[index - 1] - Y[index + 1] - Y[index] + Y[index + 2]) / (hc * hc);

    cout << "center (" << deribative_one_center << " ";
    cout << deribative_two_center << ")" << endl;
}

void right_deribative()
{
    int hr = 0;
    double Y[5] = { 0.0, 1.0, 1.4142, 1.7321, 2.0 };
    double X[5] = { 0.0, 1.0, 2.0, 3.0, 4.0 };
    double x_0 = 2.0;
    int int_x_0 = (int)x_0;
    int index = X[int_x_0];
    hr = abs(X[index + 1] - X[index]);

    double deribative_one_right = (Y[index + 1] - Y[index]) / hr;
    double deribative_two_right = (Y[index + 1] - 2 * Y[index] + Y[index - 1]) / (hr * hr);

    cout << "right (" << deribative_one_right << " ";
    cout << deribative_two_right << ")" << endl;
}

int main()
{
    left_deribative();
    center_deribative();
    right_deribative();

    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();

    return 0;
}
