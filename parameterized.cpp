#include<bits/stdc++.h>
using namespace std;

class Parameterized{
public:
    int a;
    int b;
public:
    Parameterized(int a , int b){
        cout<<"The sum of a+b is:" <<a+b<<endl;
    }


};

int main(){
    Parameterized p(3, 5); 
    // Direct constructor calling

    return 0;
}
