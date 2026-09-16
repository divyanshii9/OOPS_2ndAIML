#include <iostream>
using namespace std;
class University {
    string universityName;
public:
    University(string name) {
        universityName = name;
    }
    class Department {
        string departmentName;
        int studentCount;

    public:
        Department(string deptName, int count) {
            departmentName = deptName;
            studentCount = count;
        }

        void displayDetails(University &univ) {
            cout << univ.universityName << endl;
            cout << departmentName << endl;
            cout << studentCount << endl;
        }
    };
};

int main() {
    University myUniv("ABES");
    University::Department myDept("CS", 250);
    myDept.displayDetails(myUniv);
    return 0;
}
