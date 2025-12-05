// Task: Store information for n employees (name, ID, salary) and find the employee with the maximum and minimum salary.
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int id;
    double salary;
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee employees[n];

    // Input
    for (int i = 0; i < n; i++) {
        cout << "Enter name, id, salary for employee " << i+1 << ": ";
        cin >> employees[i].name >> employees[i].id >> employees[i].salary;
    }

    // Initialize max/min
    Employee maxEmp = employees[0];
    Employee minEmp = employees[0];

    // Find max and min salary
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > maxEmp.salary)
            maxEmp = employees[i];
        if (employees[i].salary < minEmp.salary)
            minEmp = employees[i];
    }

    cout << "Employee with max salary: " << maxEmp.name << ", Salary: " << maxEmp.salary << endl;
    cout << "Employee with min salary: " << minEmp.name << ", Salary: " << minEmp.salary << endl;

    return 0;
}
