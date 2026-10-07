// Constructor intilization list is better way to set the data memebers
// Initlization list initliaze Data members before the constructor Execeutes

#include<bits/stdc++.h>
using namespace std;
class List{
private:
    int id;
    string name;
public:
    List(int n, string s) : id(n) , name(s){
    }

    void Display(){
        cout<<"Id is : " << id <<"And name is :"<<name<<endl; 
    }
};
int main(){
    List l(2,"Ashutosh");
    l.Display();


    return 0;
}