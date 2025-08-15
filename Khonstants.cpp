#include <iostream>
#define X 100 // commonly declared in caps
using std::cout;
int main()
{
    const int x = 5;
    enum
    {
        y = 5,
        z = true
    };
    cout << X << x << y << z << std::endl;
    return 0;
}