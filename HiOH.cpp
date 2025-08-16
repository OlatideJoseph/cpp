#include <iostream>
#include <vector>
#include <fstream>

int main()
{
    std::string filename;
    std::cout << "Enter the name of a file: ";
    getline(std::cin, filename);
    std::ofstream file(filename, std::ios::app);

    std::vector<std::string> names;
    
    names.push_back("Caleb");
    names.push_back("Amy");
    names.push_back("Susan");
    names.push_back("Olatide");

    for (std::string name : names)
    {
        file << name << std::endl;
    }

    file.close();
    return 0;
}