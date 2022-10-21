
//Найти синус числа по формуле Тейлора
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double cosx(double x);

int main()
{
    double x;
    const double M_PI = 3.14;

    cout << "Enter x: ";
    cin >> x;
    x = fmod(x, 2 * M_PI);//Это позволяет найти соответствующий угол в пределах -2π <= x <= 2π


    cout << setprecision(15) << "cosx = " << cosx(x) << endl;
    cout << "libcon = " << cos(x) << std::endl;
    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();
    return 0;
}

double cosx(double x)
{
    double n = 1.0;
    double sum = 0.0;
    int i = 1;

    do
    {
        sum += n;
        n *= -1.0 * x * x / ((2 * i - 1) * (2 * i));
        i++;
    } while (fabs(n) > 0.000000001);

    return sum;
}
