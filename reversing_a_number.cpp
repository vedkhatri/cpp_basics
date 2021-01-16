#include <iostream>
using namespace std;

long long ReverseFunction (long long CCNumber);  //Function Declaration
int main()
{
    long long CCNumber, ReversedNumber;
    
    cout << "\n\t Enter the credit card number to be reversed: ";
    cin >> CCNumber;
    
    ReversedNumber = ReverseFunction (CCNumber);
    
    cout << "\n\t The reversed credit card number is " << ReversedNumber << "\n\n";
}

long long ReverseFunction (long long CCNumber)
{
    int remainder;
    long long ReversedNumber = 0;
    while (CCNumber != 0)
    {
        remainder = CCNumber % 10;
        ReversedNumber = ReversedNumber * 10 + remainder;
        CCNumber /= 10;
    }
    return ReversedNumber;
}
    