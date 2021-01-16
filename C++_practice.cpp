#include <iostream>
#include <string>
using namespace std;

int RomanNumbers(string str);
void main() {
    string str;
    cout << "\n\t Enter the Roman Number to be converted: ";
    getline (cin, str);
    cout << "\n\t The number is " << RomanNumbers(str);
}

int RomanNumbers(string str) {
    int RomanNumber = 0;
    if (str[strlen(str)-1] != 'I') {
        RomanNumber -= 2;
    }
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'I') {
            RomanNumber += 1;
        }
        else if (str[i] == 'V') {
            RomanNumber += 5;
        }
        else if (str[i] == 'X') {
            RomanNumber += 10;
        }
        else if (str[i] == 'C') {
            RomanNumber += 100;
        }
        else if (str[i] == 'M') {
            RomanNumber += 1000;
        }
    }
    return RomanNumber;
}
