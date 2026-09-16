#include<iostream>
using namespace std;
class employee {
private:
    int employeeId;
    string name;
    int salary;
public:
    employee() {
        employeeId = 234;
        name = "Vikas";
        salary = 990;
    }
    employee(int a, string b, int c) {
        employeeId = a;
        name = b;
        salary = c;
    }
    employee(const employee &emp) {
        employeeId = emp.employeeId;
        name = emp.name;
        salary = emp.salary;
    }
    void display() const {
        cout << employeeId << endl;
        cout << name << endl;
        cout << salary << endl;
    }
    void updateSalary(int newSalary) {
        salary = newSalary;
    }
};
int main() {
    const employee emp1(101, "Rahul", 50000);
    emp1.display();

    employee emp2(emp1);
    emp2.display();
    return 0;
}
