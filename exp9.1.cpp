#include <iostream>
using namespace std;
class Student {
    int rollno;
    string name;
    float studentmarks;
public:
    void read() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> studentmarks;
    }
    void display() {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << studentmarks << endl;
    }
    float marks() {
        return studentmarks;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student *s = new Student[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;
        s[i].read();
    } 
    cout<<"Student Details"<<endl;
    for (int i = 0; i < n; i++) {
        s[i].display();
        cout << endl;
    }
    Student *high = &s[0];
    for (int i = 1; i < n; i++) {
        if (s[i].marks() > high->marks()) {
            high = &s[i];
        }
    }

    cout << "Student with Highest Marks "<<endl;
    high->display();
    delete[] s;
    return 0;
}