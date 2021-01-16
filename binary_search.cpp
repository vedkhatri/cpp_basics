#include <iostream>
using namespace std;

int BinarySearch (int[], int, int, int);

int main()
{
    int array[10], NumSearch, location = -1;
    
    cout << "\n\t Enter the array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    
    cout << "\n\t Enter the number to be searched: ";
    cin >> NumSearch;
    
    location = BinarySearch(array, NumSearch, 0, 10);
    
    if (location == -1)
    {
        cout << "\n\t The searched number does not exist in the array. ";
    }
    
    else
    {
        cout << "\n\t The number was found in position " << location << endl;
    }
    return 0;
}

int BinarySearch (int arr[], int NumSearch, int Min, int Max)
{
    int Mid = (Min + Max)/2;
    if (NumSearch == arr[Mid])
    {
        return Mid + 1;
    }
    else if (NumSearch < arr[Mid])
    {
        return BinarySearch(arr, NumSearch, Min, Mid - 1);
    }
    else if (NumSearch > arr[Mid])
    {
        return BinarySearch(arr, NumSearch, Mid + 1, Max);
    }
    return -1;
}