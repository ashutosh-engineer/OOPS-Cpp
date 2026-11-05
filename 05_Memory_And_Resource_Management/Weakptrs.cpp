// Weak_ptr is non opwning smart pointers;
// Used with teh shared pointers;
// It provide acess to object without increasing it refrence counts;

#include <iostream>
#include <memory>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b) {}

    int area() {
        return length * breadth;
    }
};

int main() {
    shared_ptr<Rectangle> ptr1 = make_shared<Rectangle>(10, 5);
    weak_ptr<Rectangle> ptr2 = ptr1;

    cout << ptr1->area() << endl;
    cout << ptr2.use_count();

    return 0;
}