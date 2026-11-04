#include<bits/stdc++.h>
using namespace std;

class Base{
public:
    virtual ~Base(){
        cout<<"Object Destroyed Base"<<endl;
    }

};

class Derived : public Base{
public:
    ~Derived(){
        cout<<"Object destroyed Derived"<<endl;
    }
}

int main(){
    Base *ptr=new Derived();
    delete ptr;


    return 0;
}