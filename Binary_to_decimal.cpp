#include <iostream>
using namespace std;

int Binary_To_Decimal(int binNum) {
    int ans = 0, pow = 1;
    while (binNum > 0) {
        int rem = binNum % 10;
        ans += rem * pow;
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main() {
    cout << Binary_To_Decimal(101) << endl; // expected output: 5
    return 0;
}
