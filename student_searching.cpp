#include <iostream>
#include <algorithm>  // for sort
using namespace std;

// Linear Search function
int linearSearch(int arr[], int n, int key, int &count) {
    count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        if (arr[i] == key) return i;
    }
    return -1;
}

// Binary Search function (array must be sorted)
int binarySearch(int arr[], int n, int key, int &count) {
    int left = 0, right = n - 1;
    count = 0;
    while (left <= right) {
        count++;
        int mid = (left + right) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int rolls[n];
    cout << "Enter roll numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> rolls[i];
    }

    int key, comp;

    cout << "Enter roll to search: ";
    cin >> key;

    // Linear Search
    int idx = linearSearch(rolls, n, key, comp);
    if (idx != -1)
        cout << "Linear Search: Found at index " << idx << " (Comparisons = " << comp << ")\n";
    else
        cout << "Linear Search: Not found (Comparisons = " << comp << ")\n";

    // Sort array for Binary Search
    sort(rolls, rolls + n);

    // Binary Search
    idx = binarySearch(rolls, n, key, comp);
    if (idx != -1)
        cout << "Binary Search: Found at index " << idx << " (Comparisons = " << comp << ")\n";
    else
        cout << "Binary Search: Not found (Comparisons = " << comp << ")\n";

    return 0;
}
