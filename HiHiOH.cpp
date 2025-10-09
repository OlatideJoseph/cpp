#include <iostream>
#include <fstream>
#include <vector>

/**
 * Reading file from an input stream
 */
int main()
{
    std::vector<char> names;
    std::ifstream file("hello.txt");
    char finput;

    while (file >> finput) // input dependent
    {
        names.push_back(finput);
    }
    for (char name : names)
    {
        std::cout << name << std::endl;
    }
    return 0;
}