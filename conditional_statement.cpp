#include <iostream>
#include <string>

int main()
{
    int num1 = 90;
    std::string str = (num1 < 100) ? "\n\t Number LESS THAN 100" : "\n\t Number MORE THAN 100";
    std::cout << str << std::endl;
    return 0;
}