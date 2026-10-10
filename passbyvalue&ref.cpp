// Passby vlaue
// In pass by value function get the copy of varibale;
#include<bits/stdc++.h>
using namespace std;
void change(int value){
    value=50; 
    // GEts copy of the varibale
}
// In pass by refrence functon get the original variable
void changes(int& values){
    values=50;
}

int main(){
int number=10;
changes(number); 
// pass by refrence
change(number);

return 0;
}