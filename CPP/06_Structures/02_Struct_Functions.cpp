#include <iostream>
using namespace std;

struct Employee{
    int age;
    float salary;
    int employeeID;
};

void displayInfo(Employee emp){
    cout << "Age is : " << emp.age << endl;
    cout << "Salary is : " << emp.salary << endl;
    cout << "Employee ID is : " << emp.employeeID << endl; 
}

// void displayInfo(Employee);

int main(){

    Employee e1, e2;

    e1.age = 30;
    e1.salary = 1000;
    e1.employeeID = 100;
    e2.age = 22;
    e2.salary = 2000;
    e2.employeeID = 200;

    displayInfo(e1);
    displayInfo(e2);

}


// void displayInfo(Employee emp){
//     cout << "Age is : " << emp.age << endl;
//     cout << "Salary is : " << emp.salary << endl;
//     cout << "Employee ID is : " << emp.employeeID << endl; 
// }