#include <iostream>
using namespace std;

class Student {
public:
    static int count; // static member variable

    Student() {
        count++;
    }

    static void showCount() { // static member function
        cout << "Total Students = " << count << endl;
    }
};

// Static variable definition
int Student::count = 0;

int main() {

    Student s1;
    Student s2;
    Student s3;

    Student::showCount();

    return 0;
}




// Sttaic function can only acess attic members
// static memebrs have only 1 coy throughout the program
// static mmebers can be called directl y static::function();
// Static varibale creted in memory before ceation of object and after start of program
// Alwasy used inside the class
