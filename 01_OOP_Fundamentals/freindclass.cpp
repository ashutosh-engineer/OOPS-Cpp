// Freind class is class that can directly acess the private and protected
// Members of another class

// Declareds using frein dkeyword in the class;
#include<bits/stdc++.h>
using namespace std;
class freindsa{
private:
    int balance;
public: 
    freindsa(int k): balance(k){
    }

    friend class Bank;

};
class Bank{
public:
    void display(freindsa sa){
        cout<<sa.balance;
    }
};
int main(){
    freindsa sa(21);
    Bank ka;
    ka.display(sa);
    return 0;
}