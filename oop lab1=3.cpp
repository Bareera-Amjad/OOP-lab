#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    float salary;
    string designation;
    int id;
};

void inputEmployeeData(Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter name of employee " << i + 1 << ": ";
        cin >> emp[i].name;
        cout << "Enter salary of employee " << i + 1 << ": ";
        cin >> emp[i].salary;
        cout << "Enter designation of employee " << i + 1 << ": ";
        cin >> emp[i].designation;
        cout << "Enter ID of employee " << i + 1 << ": ";
        cin >> emp[i].id;
    }
}

void displayEmployeeData(Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Employee " << i + 1 << " Information: \n";
        cout << "Name: " << emp[i].name << endl;
        cout << "Salary: " << emp[i].salary << endl;
        cout << "Designation: " << emp[i].designation << endl;
        cout << "ID: " << emp[i].id << endl;
    }
}

void findHighestSalary(Employee emp[], int n) {
    float highestSalary = emp[0].salary;
    int highestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > highestSalary) {
            highestSalary = emp[i].salary;
            highestIndex = i;
        }
    }
    cout << "Employee with the highest salary:\n";
    cout << "Name: " << emp[highestIndex].name << endl;
    cout << "Salary: " << emp[highestIndex].salary << endl;
    cout << "Designation: " << emp[highestIndex].designation << endl;
    cout << "ID: " << emp[highestIndex].id << endl;
}

int main() {
    int num;
    cout << "Enter the number of employees: ";
    cin >> num;
    Employee emp[num];
    inputEmployeeData(emp, num);
    displayEmployeeData(emp, num);
    findHighestSalary(emp, num);
    return 0;
}
