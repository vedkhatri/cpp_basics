#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int BaseNumber, ExponentialNumber, Result;

    cout << "\n\t Enter the base number: ";
    cin >> BaseNumber;
    cout << "\n\t Enter the exponential number: ";
    cin >> ExponentialNumber;

    Result = pow(BaseNumber, ExponentialNumber);
    
    cout << "\n\t The result is : " << Result << endl;
}