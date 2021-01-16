#include <iostream>
using namespace std;

int main()
{
   int SearchedNumber, arr[10], position;
    
    cout << "\n\t Enter the array to be searched: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    
    
    cout << "\n\t Enter the number to be searched: ";
    cin >> SearchedNumber;
    
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == SearchedNumber)
        {
            position = i + 1;
        }
    }
    
    if (position == 1)
    {
        cout << "\n\t The searched number is in the " << position << "st position. ";
    }
    else if (position == 2)
    {
        cout << "\n\t The searched number is in the " << position << "nd position. ";
    }
    else if (position == 3)
    {
        cout << "\n\t The searched number is in the " << position << "rd position. ";
    }
    else {    
        cout << "\n\t The searched number is in the " << position << "th position. ";
    }
}
        