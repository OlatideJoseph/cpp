#include <iostream>
#include <vector>

void push_num_ranges(long int start, long int end, std::vector<long int> &v)
{
    for (long int i = start; i < end; i++)
    {
        v.push_back(i);
    }
}
/**
 * @param n calculate the fibonacci of n
 * @returns fibonacci of `n`
 */
unsigned int fib(unsigned int n)
{

    if (n <= 1)
    {
        return 1;
    }

    return (fib(n - 1) + fib(n - 2));
}

int main()
{
    std::vector<long int> arr;

    push_num_ranges(0, 1000000, arr);

    std::cout << "Array size: " << arr.size() << std::endl;
    long int i = 1;

    // while (true)
    // {
        const long int val = fib(50);
        // if (val >= 100)
        // {
        //     break;
        // }
        std::cout << val << std::endl;
    // }

    return 0;
}