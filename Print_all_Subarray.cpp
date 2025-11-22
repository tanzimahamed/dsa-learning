#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3};
    int n = 3;

    for(int start = 0; start < n; start++) {
        for(int end = start; end < n; end++) {

            // print subarray from start to end
            for(int k = start; k <= end; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
