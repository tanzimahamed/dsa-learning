// #include <iostream>
// using namespace std;

// int main() {
//     int numbers[5];  // Declaring an array of size 5

//     // Initialize elements
//     numbers[0] = 10;
//     numbers[1] = 20;
//     numbers[2] = 30;
//     numbers[3] = 40;
//     numbers[4] = 50;

//     cout << "First element: " << numbers[0] << endl;
//     cout << "Third element: " << numbers[2] << endl;

//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];  // sum = sum + arr[i]
    }

    cout << "Sum = " << sum << endl; // Output: 15
    return 0;
}



