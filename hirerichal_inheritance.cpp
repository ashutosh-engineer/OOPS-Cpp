#include <bits/stdc++.h>
using namespace std;

// Base Class
class Dict {
public:
    string school = "Parul";
    int id = 3989;
};

// Derived Class
class geter : public Dict {
public:
    void Details() {
        cout << "School name is: " << school << endl;
        cout << "My id is: " << id << endl;
    }
};

// Further Derived Class
class Unknow : public geter {
public:
    void all_Details() {
        cout << "All details are here" << endl;
        Details();
    }
};

int main() {
    Unknow obj;
    obj.all_Details();

    return 0;
}