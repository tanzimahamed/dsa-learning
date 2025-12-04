// Task: Input name, roll, marks for 3 students and print their info.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s[3];

    // Input 3 students
    for (int i = 0; i < 3; i++) {
        cout << "Enter student " << i+1 << " info (name roll marks): ";
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }

    // Output
    cout << "\n--- Student Info ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << s[i].name
             << ", Roll: " << s[i].roll
             << ", Marks: " << s[i].marks << endl;
    }

    return 0;
}
