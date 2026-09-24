#include<bits/stdc++.h>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
    double cgpa;

    class Address {
    private:
        string city;
        string state;

    public:
        Address(string cityName, string stateName) {
            city = cityName;
            state = stateName;
        }

        void displayAddress() {
            cout << "Address: " << city << ", " << state << endl;
        }
    };

    Address* address;

public:
    Student(int studentRollNo, string studentName) {
        rollNo = studentRollNo;
        name = studentName;
        cgpa = 0.0;
        address = nullptr;
    }

    Student(int studentRollNo, string studentName, double studentCGPA) {
        rollNo = studentRollNo;
        name = studentName;
        cgpa = studentCGPA;
        address = nullptr;
    }

    void updateCGPA(double newCGPA) {
        this->cgpa = newCGPA;
    }

    void setAddress(string cityName, string stateName) {
        address = new Address(cityName, stateName);
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;

        if (address != nullptr) {
            address->displayAddress();
        } else {
            cout << "Address: Not provided" << endl;
        }

      
    }

    ~Student() {
        delete address;
    }
};

int main() {
    Student students[5] = {
        Student(101, "Rahul"),
        Student(102, "Priya", 8.7),
        Student(103, "Aman"),
        Student(104, "Sneha", 9.1),
        Student(105, "Rohan")
    };

    students[0].updateCGPA(8.2);
    students[2].updateCGPA(7.9);
    students[4].updateCGPA(8.8);

    students[0].setAddress("Delhi", "Delhi");
    students[1].setAddress("Lucknow", "Uttar Pradesh");
    students[2].setAddress("Jaipur", "Rajasthan");
    students[3].setAddress("Mumbai", "Maharashtra");
    students[4].setAddress("Kolkata", "West Bengal");

    cout << "===== STUDENT DETAILS =====" << endl;

    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}

