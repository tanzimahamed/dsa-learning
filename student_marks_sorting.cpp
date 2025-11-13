#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int n, int &comparisons) {
    comparisons = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n, int &comparisons) {
    comparisons = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int marks[n];

    cout << "Enter marks: ";
    for (int i = 0; i < n; i++)
        cin >> marks[i];

    int comparisons;

    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++) {
        arr1[i] = marks[i];
        arr2[i] = marks[i];
    }

    bubbleSort(arr1, n, comparisons);
    cout << "\nAfter Bubble Sort (Comparisons = " << comparisons << "): ";
    display(arr1, n);

    selectionSort(arr2, n, comparisons);
    cout << "After Selection Sort (Comparisons = " << comparisons << "): ";
    display(arr2, n);

    return 0;
}
