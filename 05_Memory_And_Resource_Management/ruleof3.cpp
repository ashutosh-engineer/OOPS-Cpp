// Rule of 3: if a class manually manages a resource,
// it should define these 3 special members:
// 1) destructor
// 2) copy constructor
// 3) copy assignment operator

#include <bits/stdc++.h>
using namespace std;

class Strings {
private:
    int* data;
    int size;

public:
    // Constructor: allocate dynamic memory
    Strings(int n) : size(n) {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = i + 1;
        }
    }

    // Copy constructor: deep copy
    Strings(const Strings& other) : size(other.size) {
        data = new int[size];
        copy(other.data, other.data + size, data);
    }

    // Copy assignment operator: deep copy and self-assignment safe
    Strings& operator=(const Strings& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new int[size];
            copy(other.data, other.data + size, data);
        }
        return *this;
    }

    // Destructor: free the resource
    ~Strings() {
        delete[] data;
    }

    void print() const {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Strings a(3);   // constructor
    Strings b = a;   // copy constructor
    Strings c(2);
    c = a;          // copy assignment operator

    cout << "a: ";
    a.print();
    cout << "b: ";
    b.print();
    cout << "c: ";
    c.print();

    return 0;
}