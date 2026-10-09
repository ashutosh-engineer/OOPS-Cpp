// This pointer hold the adress of current object

#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    string name;
    int age;

public:
    Student(string name, int age){
        this->age=age;
        this->name=name;
    }

    void display(){
        cout<<this->age<<endl;
        cout<<this->name<<endl;
    }
};

int main(){
    Student s("Ashutosh", 21);
    s.display();

    return 0;
}