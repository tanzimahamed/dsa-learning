// Task: Store n students with their marks in 3 subjects and calculate average and grade.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks[3];
    float avg;
    char grade;
};

char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 75) return 'B';
    else if (avg >= 60) return 'C';
    else if (avg >= 50) return 'D';
    else return 'F';
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student students[n];

    // Input
    for (int i = 0; i < n; i++) {
        cout << "Enter name and roll for student " << i+1 << ": ";
        cin >> students[i].name >> students[i].roll;
        cout << "Enter marks for 3 subjects: ";
        float sum = 0;
        for (int j = 0; j < 3; j++) {
            cin >> students[i].marks[j];
            sum += students[i].marks[j];
        }
        students[i].avg = sum / 3;
        students[i].grade = calculateGrade(students[i].avg);
    }

    // Output
    for (int i = 0; i < n; i++) {
        cout << "Student: " << students[i].name
             << ", Roll: " << students[i].roll
             << ", Avg: " << students[i].avg
             << ", Grade: " << students[i].grade << endl;
    }

    return 0;
}
