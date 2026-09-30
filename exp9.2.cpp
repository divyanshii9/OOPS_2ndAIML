#include <iostream>
using namespace std;
class ServiceRecord {
    string servicename;
    float servicecost;
public:
    void read() {
        cout << "Enter service name: ";
        cin >> servicename;
        cout << "Enter service cost: ";
        cin >> servicecost;
    }
    void display() {
        cout << "Service Name: " << servicename << endl;
        cout << "Service Cost: " << servicecost << endl;
    }
    float cost() {
        return servicecost;
    }
};

class Vehicle {
    string vehicleno;
    string ownername;
    int servicecount;
    ServiceRecord *s;

public:
    Vehicle(string v, string o, int n) {
        vehicleno = v;
        ownername = o;
        servicecount = n;
        s = new ServiceRecord[servicecount];
    }

    void read() {
        for (int i = 0; i < servicecount; i++) {
            cout << "\nEnter details of service " << i + 1 << endl;
            s[i].read();
        }
    }

    void display() {
        cout << "\nVehicle Details\n";
        cout << "Vehicle Number: " << vehicleno << endl;
        cout << "Owner Name: " << ownername << endl;

        cout << "\nService Records\n";
        for (int i = 0; i < servicecount; i++) {
            s[i].display();
            cout << endl;
        }
    }
    void bill() {
        float total = 0;
        for (int i = 0; i < servicecount; i++) {
            total = total + s[i].cost();
        }
        cout << "Total Service Bill: " << total << endl;
    }
    ~Vehicle() {
        delete[] s;
    }
};
int main() {
    string vehicleno, ownername;
    int servicecount;
    cout << "Enter vehicle number: ";
    cin >> vehicleno;
    cout << "Enter owner name: ";
    cin >> ownername;
    cout << "Enter number of services: ";
    cin >> servicecount;
    Vehicle *v = new Vehicle(vehicleno, ownername, servicecount);
    v->read();
    v->display();
    v->bill();

    delete v;

    return 0;
}