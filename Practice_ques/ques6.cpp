#include <iostream>
using namespace std;
class StudentResult {
private:
    int rollNo;
    string name;
    int m1, m2, m3;
public:
    static int totalStudents;
    StudentResult(int r, string n, int x, int y, int z) {
        rollNo = r;
        name = n;
        m1 = x;
        m2 = y;
        m3 = z;
        totalStudents++;
    }
    ~StudentResult() {
        cout << name << " object destroyed" << endl;
    }

    static void showTotalStudents() {
        cout << "Total students created: " << totalStudents << endl;
    }

    friend class ResultAnalyzer;
};

int StudentResult::totalStudents = 0;
class ResultAnalyzer {
public:
    void analyze(StudentResult &s) {
        int total = s.m1 + s.m2 + s.m3;
        double percentage = total / 3.0;


        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (s.m1 >= 40 && s.m2 >= 40 && s.m3 >= 40) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }
};

int main() {
    StudentResult s1(1, "Amit", 85, 78, 90);
    StudentResult s2(2, "Ravi", 35, 60, 70);

    StudentResult::showTotalStudents();

    ResultAnalyzer r;
    r.analyze(s1);
    r.analyze(s2);
    cout << endl;
    return 0;
}
