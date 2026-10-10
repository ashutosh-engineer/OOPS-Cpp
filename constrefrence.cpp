// Const refrence
// If function can read the value but cnanot modify it so const refrence is used;
// Vlaue never get modifed
#include<bits/stdc++.h>
using namespace std;

void display(const string& name){
    cout<<name<<endl;
}
// Null pointer
// Null pointer tells that pointer does not pointing to any valid objec or memeory
int *ptr=nullptr;

// Dangling Pointer
// If pointer points the memeory adress which is already destroyed called as the dangling pointer;
int *ptr= new int(10);
delete ptr
ptr=nullptr; 
// HEre it shows prevention and making of dangling pointers;


int main(){
    display("Ashutosh");
    return 0;
}