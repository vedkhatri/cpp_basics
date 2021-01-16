#include <iostream>

class MyClass
{
    public:
    int x, y;
    MyClass (int xx, int yy)
    : x {xx}, y {yy} // Member Initialiser List
        {
            std::cout << "\n\t Members initialised " << xx << " " << yy << "\n\n";
        }
};

int main ()
{
    MyClass o {1, 3};
}
    