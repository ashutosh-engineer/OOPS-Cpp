// Pointers are the varibale that store adress of another varibales;
// * called as derefrence operator
// Refrence means the value of another existing varibale
// Refrence cant be Nullptr, cant be reassigned;
// Pointers can be reassigned , refrences cannot
// Acess values thorugh drefrence operator
// Refrences acess values directly;
// Pointers can be NULL but Refrences cannot be NULL;

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int *b = &a;

    cout<<*b;

    // Refrence is the name of another another existing varibale
    int& c =a;
    c=20;
    cout<<a;

    return 0;
}
