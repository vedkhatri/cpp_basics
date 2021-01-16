#include <iostream>
using namespace std;

int Fibonacci(int); // Function declaration
int main()
{
    int sequence, value;
    
    cout << "\n\t Enter the sequence/element number to be found from Fibonacci series: ";
    cin >> sequence;
    
    value = Fibonacci(sequence);
    
    cout << "\n\t The " << sequence << "th element is " << value << endl;
}

int Fibonacci (int seq)
{
    int first = 0, second = 1;
    for (int i = 3; i < seq; i++)
    {
        second += first;
        first = second;
    }
    return second;
}