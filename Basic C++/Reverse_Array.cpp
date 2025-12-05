// Problem: Print the array in reverse order.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    cout << "Reversed Array: ";
    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl; // Output: 5 4 3 2 1
    return 0;
}
