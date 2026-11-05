// Runtime polymorphism -Where it is decided which function to be called while the runtime of program
// To implement this we use virtual function , Function Overriding
// Without inheritance function overriding cant be achived;

#include<bits/stdc++.h>
using namespace std;
class Base{
public:
    void bark(){
        cout<<"Dog barks siuuuuuu"<<endl;
    }

};
class Derived: public Base{
public:
    void bark(){
        cout<<"Monkey saysss meowww"<<endl;
    }

};

int main(){
    Derived D1;
    D1.bark();
    return 0;
}