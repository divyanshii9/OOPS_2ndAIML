#include <iostream>
using namespace std;
class Student {
public:
    void show(int rollno, int marks) {
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }

    void show(string name, int rollno) {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }
};
int main() {
    Student s;
    s.show(99, 85);
    s.show("Vikas", 101);
    return 0;
}