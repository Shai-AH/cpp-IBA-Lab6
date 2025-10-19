#include <iostream>
using namespace std;

int main() {
    long num;
    cout << "Enter a number (at least 4 digits): ";
    cin >> num;

    if (num < 1000) {
        cout << "Number must be at least 4 digits!" << endl;
        return 0;
    }

    while (num >= 10) {
        int sum = 0;

        while (num > 0) {
            int digit = num % 10;      
            sum = sum + digit;        
            num = num / 10;         
        }

        cout << "Intermediate sum = " << sum << endl;
        num = sum; 
    }

    cout << "Final single digit = " << num << endl;
    return 0;
}
