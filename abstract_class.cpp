#include <iostream>

class AbstractClass 
{
    public:
    virtual void dowork() = 0; // Pure Virtual Function
};

class DerivedClass : public AbstractClass
{
    public:
    void dowork()
    {
        std::cout << "\n\t Hello from a derived class.\n\n";
    }
};

int main ()
{
    AbstractClass* o = new DerivedClass;
    o -> dowork();
    delete o;
}
