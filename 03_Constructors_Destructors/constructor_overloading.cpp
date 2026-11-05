// Constructor overloading means more than one constructors are created inside the class
// But the parameteres should be different
// C++  compillor automaticlaly choses the constructor based on arement passed;

#include<bits/stdc++.h>
using namespace std;
class Overloading{
private:
    int id;
    string name;

public:
    Overloading(int a, string b): id(a), name(b){
    }

    Overloading(int a) :id(a){
    }

    void Display(){
        cout<<"Name is : " << name<<endl;
        cout<<"id is : " <<id<<endl;
    }

};
int main(){
    Overloading O(1);
    O.Display();
    
    return 0;
}