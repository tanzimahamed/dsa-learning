// C++ program that calculates the sum of the digits of a number.

#include <iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cout << "enter a number :";
    cin >> num ;
    while (num > 0)
    {
        int digit = num % 10; // get last degit
        sum += digit;         // add digit to sum
        num /= 10;            // remove last digit 

    }
    cout<< "Sum of digits ="<< sum << endl;
    return 0 ;
    
}