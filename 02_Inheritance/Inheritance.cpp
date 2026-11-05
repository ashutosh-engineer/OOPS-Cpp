#include<bits/stdc++.h>
using namespace std;
class parrent{
public:
    void printHello(){
        cout <<"Hello"<<endl;
        return;
    }
};

class child : public parrent{
public:
    void childs(){
        cout<<"This is child class";
        return;
    }
};

int main(){
    child c1;
    c1.printHello();

    return 0;
}