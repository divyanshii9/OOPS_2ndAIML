#include <iostream>
#include <memory>
using namespace std;
class Student {
public:
    string name;
    int marks;
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    unique_ptr<Student> s1 = make_unique<Student>("Vikas", 85);

    cout << "Using unique_ptr:" << endl;
    s1->display();
    shared_ptr<Student> s2 = make_shared<Student>("Vivek", 90);
    shared_ptr<Student> s3 = s2;

    cout << "\nUsing shared_ptr:" << endl;
    s2->display();
    cout << "Number of owners: " << s2.use_count() << endl;
    return 0;
}