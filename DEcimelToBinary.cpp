// Let's explain this C++ program step by step (both English + Bangla) — it converts a decimal number into binary form.

#include <iostream>
using namespace std;


int decToBinary(int decNum){
    int ans = 0, pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2 ;
        decNum /= 2;

        ans += (rem*pow);
        pow *=10;
    } return ans;

}

 int main() {
    int decNum = 50;
    for (int i = 1; i <= 10; i++) {
        cout << decToBinary(i) << endl;
    }
    return 0;
}    