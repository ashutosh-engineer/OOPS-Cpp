#include<bits/stdc++.h>
using namespace std;

class Teacher{
public:
    int id;
    string name;
    string subject;

private:
    double salary;
    int number_of_working_days;

public:
    void setSalary(double value) {
        salary = value;
    }

    double getSalary() const {
        return salary;
    }
};
int main(){
    Teacher t1;
    t1.id=332;
    t1.subject="Maths";
    t1.setSalary(2434.50); // Private data is accessed through public methods.

    // Encapsulation binds data and the methods that operate on it in one class.
    // Access specifiers control which class members can be accessed from outside.
    // Private members can be accessed directly only from within the class.

    return 0;
}