// Input info for 3 students and print the student with the highest marks.


#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s1, s2, s3;

    cout << "Enter 1st student info:\n";
    cin >> s1.name >> s1.roll >> s1.marks;

    cout << "Enter 2nd student info:\n";
    cin >> s2.name >> s2.roll >> s2.marks;

    cout << "Enter 3rd student info:\n";
    cin >> s3.name >> s3.roll >> s3.marks;

    // Find topper
    Student best = s1;

    if (s2.marks > best.marks)
        best = s2;

    if (s3.marks > best.marks)
        best = s3;

    cout << "\nTopper: " << best.name 
         << " Roll: " << best.roll 
         << " Marks: " << best.marks << endl;

    return 0;
}





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

    for(int i = 0; i < 3; i++) {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, s[i].name);

        cout << "Enter roll: ";
        cin >> s[i].roll;

        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    int best = 0;
    for (int i = 1; i < 3; i++) {
        if (s[i].marks > s[best].marks) {
            best = i;
        }
    }

    cout << "\nTopper:\nName: " << s[best].name
         << "\nRoll: " << s[best].roll
         << "\nMarks: " << s[best].marks << endl;

    return 0;
}
