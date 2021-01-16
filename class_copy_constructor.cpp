#include <iostream>

class MyClass
{
    private:
    int x;
    int* p;
    public:
    MyClass (int xx, int pp)        // User-defined REGULAR constructor
        : x {xx}, p {new int {pp}}
            {
            }
    MyClass (const MyClass& rhs)    // User-defined COPY constructor
        : x {rhs.x}, p {rhs.p}
            {
                std::cout << "\n\t User-defined copy constructor.\n\n";
            }
};

    int main ()
    {
        MyClass o {1, 2};
        MyClass o2 = o;
    }