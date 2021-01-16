#include <iostream>
using namespace std;

int Factorial (int); //Function declaration
int main()
{
    int NumFactorial, Fact;
    
    cout << "\n\t Enter the number to find its factorial: ";
    cin >> NumFactorial;
    
    Fact = Factorial(NumFactorial);
    
    cout << "\n\t The Factorial of " << NumFactorial << " is " << Fact << endl;
}

int Factorial (int Num)
{
    if (Num >= 1) {
        return Factorial(Num - 1) * Num;
    }
}