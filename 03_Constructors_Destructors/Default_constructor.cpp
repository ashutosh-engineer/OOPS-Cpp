#include<bits/stdc++.h>
using namespace std;

class Default{
private:
    string name;
    int id;

public:
    Default(){
        name="Ashutosh Singh";
        id=23445;
    }

    void Display(){
        cout<<"Name is:" << name<<endl;
        cout<<"ID is :" << id;
    }

};

int main(){
    Default dt1;
    dt1.Display();
    return 0;
}
