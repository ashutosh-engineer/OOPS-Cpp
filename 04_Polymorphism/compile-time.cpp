// Polymorphism means one name with multiple forms
// Compile time polymorphism means compillor decides to which function will be called at compile time;
// Example:-Constructor overlaoding, Function overloading,Operator overlaoding.

// Function overloading
#include<bits/stdc++.h>
using namespace std;
class Compile_time{
public:
    int add(int a , int b){
        return a+b;
    }
    int add(double a , double b){
        return a+b;
    }
};
int main(){
    Compile_time c1;
    c1.add(2,3);
    c1.add(2.5,2.6);
    return 0;
}