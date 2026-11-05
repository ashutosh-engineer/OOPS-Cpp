#include<bits/stdc++.h>
using namespace std;
class Base{
public:
    virtual void bark(){
        cout<<"Hello ashutouosh"<<endl;
    }
};
class Derived : public Base{
public:
 virtual void bark(){
        cout<<"Hello ashutouosh Dervied"<<endl;
    }
};
int main(){
    Base *ptr;
    Derived d1;
    ptr = &d1;
    ptr->bark();
    return 0;
}