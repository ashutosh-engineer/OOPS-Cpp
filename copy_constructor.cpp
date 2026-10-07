// An copy constructor create a new object from existing object
#include<bits/stdc++.h>
using namespace std;
class Copy{
private:
    int length;
    string shape;
public: 
    Copy(int n, string s) : length(n), shape(s){
    }

    Copy(const Copy& oldobject)
        :length(oldobject.length),
        shape(oldobject.shape){
            cout<<"Copy constructor Called"<<endl;
        }
    void display(){
        cout<<length << shape<<endl;
    }
};
int main(){
    Copy c(1,"Ash");
    Copy c1(c);

    c.display();
    return 0;
}