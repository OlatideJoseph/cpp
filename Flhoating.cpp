#include <iostream>
#include <float.h>
using std::cout;

int main()
{
    float a = 10.0 / 3;
    a = a * 1000000;
    double b = 7.7E4;
    long double c;

    cout << "Float " << b << '\n';
    cout << std::fixed << "Float" << a << '\n';
    cout << "Double Max: " << DBL_DIG << '\n'
         << "Float Max: " << FLT_DIG << '\n'
         << "Long Double Max: " << LDBL_DIG << std::endl;
    return 0;
}