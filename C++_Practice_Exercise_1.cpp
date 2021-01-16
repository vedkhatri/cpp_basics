#include <iostream>

class MyClass
{
    public:
    double Num1, Num2;
    double Division (double Num1, Num2);
    MyClass();
    ~MyClass();
}

double MyClass : Division (double Num1, Num2)
{
    double Div = Num1 / Num2;
    return Div;
}

int main()
{
    MyClass o;
    std::cout << "\n\t The answer for 12/5 is: " << o.Division(12.43, 5.01) << std::endl;
}
    
    