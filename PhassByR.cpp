#include <iostream>

/**
 * @param &a
 * @param &b
 */
void swap(int &a, int &b)
{
    const int temp = a;
    a = b;
    b = temp;
    std::cout << "a: " << a << " b: " << b << std::endl;
}

int main()
{
    int a = 10, b = 20;

    swap(a, b);
    std::cout << "a: " << a << " b: " << b << std::endl;

    return 0;
}