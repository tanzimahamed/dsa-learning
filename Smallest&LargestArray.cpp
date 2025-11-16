#include <iostream>
#include <climits>   // INT_MAX here
using namespace std;

int main() {
    int arr[] = {10, 50, 3, 99, 2};
    int n = 5;

    int smallest = INT_MAX; 

    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Smallest = " << smallest << endl;

    return 0;
}





// Example: Find Largest Number using INT_MIN
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 50, 3, 99, 2};
    int n = 5;

    int largest = INT_MIN; 

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;

    return 0;
}



// Find Smallest & Largest(same program )
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {5, 8, 2, 11, 20, -3};
    int n = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];
        
        if(arr[i] > largest)
            largest = arr[i];
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;

    return 0;
}




// Second Largest Element
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 25, 14, 50, 7};
    int n = 5;

    int largest = INT_MIN, secondLargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest = " << secondLargest << endl;
    return 0;
}





// Second Smallest Element
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 3, 8};
    int n = 5;

    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "Second Smallest = " << secondSmallest << endl;
    return 0;
}


// Largest 3 Elements
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 40, 20, 5, 60, 55};
    int n = 6;

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second) {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third) {
            third = arr[i];
        }
    }

    cout << "Top 3 Largest = " << first << " " << second << " " << third << endl;
    return 0;
}





