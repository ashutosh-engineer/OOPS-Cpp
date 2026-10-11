#include <iostream>
#include <memory>
#include <string>
#include <utility>

// Rule of 0:
// If a class manages resources through RAII (like smart pointers),
// then the compiler can generate the special member functions for us.
class Person {
public:
    Person(std::string name, std::string bio)
        : name_(std::move(name)),
          bio_(std::make_shared<std::string>(std::move(bio))) {
    }

    // No destructor, copy constructor, copy assignment, move constructor,
    // or move assignment is written manually.
    void print() const {
        std::cout << "Name: " << name_ << "\n"
                  << "Bio:  " << *bio_ << "\n";
    }

private:
    std::string name_;                  // RAII-managed string
    std::shared_ptr<std::string> bio_;  // RAII-managed resource
};

int main() {
    Person p1("Aman", "Loves C++ programming");
    Person p2 = p1;  // compiler-generated copy works
    Person p3 = std::move(p1); // compiler-generated move works

    std::cout << "Original object ->\n";
    p2.print();

    std::cout << "Moved object ->\n";
    p3.print();

    return 0;
}

