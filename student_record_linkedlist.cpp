#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
    Student* next;
};

Student* head = nullptr;

// Insert new record
void insertRecord() {
    Student* newNode = new Student;

    cout << "Enter Roll: ";
    cin >> newNode->roll;
    cout << "Enter Name: ";
    cin >> newNode->name;
    cout << "Enter Marks: ";
    cin >> newNode->marks;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Student* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }

    cout << "Record Added.\n";
}

// Delete record by roll
void deleteRecord(int roll) {
    if (head == nullptr) {
        cout << "No record found.\n";
        return;
    }

    if (head->roll == roll) {
        Student* temp = head;
        head = head->next;
        delete temp;
        cout << "Record deleted.\n";
        return;
    }

    Student* temp = head;
    while (temp->next != nullptr && temp->next->roll != roll)
        temp = temp->next;

    if (temp->next == nullptr) {
        cout << "Roll not found.\n";
    } else {
        Student* del = temp->next;
        temp->next = del->next;
        delete del;
        cout << "Record deleted.\n";
    }
}

// Search record
void searchRecord(int roll) {
    Student* temp = head;
    while (temp != nullptr) {
        if (temp->roll == roll) {
            cout << "\nRecord Found:\n";
            cout << "Roll: " << temp->roll << "\n";
            cout << "Name: " << temp->name << "\n";
            cout << "Marks: " << temp->marks << "\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Record not found.\n";
}

// Display all records
void displayAll() {
    if (head == nullptr) {
        cout << "No records to display.\n";
        return;
    }

    cout << "\nAll Student Records:\n";
    Student* temp = head;
    while (temp != nullptr) {
        cout << "Roll: " << temp->roll
             << ", Name: " << temp->name
             << ", Marks: " << temp->marks << "\n";
        temp = temp->next;
    }
}

int main() {
    int choice, roll;

    while (true) {
        cout << "\n----- Student Record Menu -----\n";
        cout << "1. Insert Record\n";
        cout << "2. Delete Record\n";
        cout << "3. Search Record\n";
        cout << "4. Display All\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertRecord();
                break;
            case 2:
                cout << "Enter roll to delete: ";
                cin >> roll;
                deleteRecord(roll);
                break;
            case 3:
                cout << "Enter roll to search: ";
                cin >> roll;
                searchRecord(roll);
                break;
            case 4:
                displayAll();
                break;
            case 5:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice.\n";
        }
    }
}
