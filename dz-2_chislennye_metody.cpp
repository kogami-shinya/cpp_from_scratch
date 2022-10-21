#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double X[5] = { 0.0, 1.0, 2.0, 3.0, 4.0 };
    double Y[5] = { 0.0, 1.0, 1.4142, 1.7321, 2.0 };
    double x_0 = 2.0;
    int int_x_0 = (int)x_0;
    int hl = 0,hr = 0,hc = 0;
    int index = X[int_x_0];

    //left
    hl = abs(X[index] - X[index - 1]);

    double deribative_one_left = (double)(Y[index] - Y[index - 1]) / hl;
    double deribative_two_left = (Y[index] - 2 * Y[index - 1] + Y[index - 2]) / (hl * hl);
    
    cout <<"left (" << deribative_one_left << " ";
    cout << deribative_two_left << ")" << endl;

    //center
    hc = abs(X[index] - X[index + 1]);
    double deribative_one_center = (Y[index-1] - Y[index + 1])/(2*hc);
    double deribative_two_center = (Y[index - 1] - Y[index + 1] - Y[index] + Y[index + 2]) / (hc * hc);

    cout << "center (" << deribative_one_center << " ";
    cout << deribative_two_center <<")" << endl;

    //right
    hr = abs(X[index + 1] - X[index]);
    double deribative_one_right = (Y[index + 1] - Y[index]) / hr;
    double deribative_two_right = (Y[index + 1] - 2 * Y[index] + Y[index - 1]) / (hr * hr);

    cout << "right (" << deribative_one_right << " ";
    cout << deribative_two_right << ")" << endl;

    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();

    return 0;
}
