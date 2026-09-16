#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int patientId;
    string patientName;
    static int activePatients;

public:
    Patient(int id, string name) {
        patientId = id;
        patientName = name;
        activePatients++;
    }

    ~Patient() {
        activePatients--;
    }

    static void showActivePatients() {
        cout << "Active Patients: " << activePatients << endl;
    }
};

int Patient::activePatients = 0;

int main() {
    Patient::showActivePatients();

    Patient p1(101, "Vikas");
    Patient::showActivePatients();
    {
        Patient p2(102, "Vivek");
        Patient::showActivePatients();
    }

    Patient::showActivePatients();

    return 0;
}
