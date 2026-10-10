// Const refrence
// If function can read the value but cnanot modify it so const refrence is used;
// Vlaue never get modifed
#include<bits/stdc++.h>
using namespace std;

void display(const string& name){
    cout<<name<<endl;
}

int main(){
    display("Ashutosh");
    return 0;
}