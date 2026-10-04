#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;

    void setName(string n) {
        name = n;
    }

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Employee {
public:
    int id;

    void setId(int i) {
        id = i;
    }

    void displayId() {
        cout << "ID: " << id << endl;
    }
};

class Teacher : public Person, public Employee {
public:
    string subject;

    void displayInfo() {
        cout << "Teacher Details" << endl;
        displayName();
        displayId();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Teacher t1;
    t1.setName("Amit");
    t1.setId(101);
    t1.subject = "Maths";

    t1.displayInfo();
    return 0;
}
