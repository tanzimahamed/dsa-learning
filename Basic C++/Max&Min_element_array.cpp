// Find the largest and smallest element in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 30, 2, 50};
    int maxVal = arr[0];
    int minVal = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
        if(arr[i] < minVal) minVal = arr[i];
    }

    cout << "Maximum = " << maxVal << endl; // 50
    cout << "Minimum = " << minVal << endl; // 2
    return 0;
}
