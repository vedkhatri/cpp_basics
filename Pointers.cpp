#include <iostream>
using namespace std;

int main()
{
    int ar[5];
    
    cout << "\n\t Enter the value for 5 elements of an array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i];
    }
    
    cout << "\n\t The entered values are: ";
    for (int i = 0; i < 5; i++)
    {
        int *ptr = &ar[i];
        cout << *ptr << ' ';
    }
    return 0;
}