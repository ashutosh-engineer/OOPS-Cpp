// Freind functions
// Freind function can acess the  private and protected members of class
// It is normal function
// Declares using the freind keyword
// Used when need to acess private data members outside of class by a method

#include<bits/stdc++.h>
using namespace std;
class freinds{
private:
    int marks;
public:   
    freinds(int n) : marks(n){
    }

    // `freinds` is the class type, and `freinda` is the parameter name.
    // The object is passed by value, so a copy of the calling object is made.
    friend void display(freinds freinda);
};

// `freinds freinda`: freinda is a freinds object received by this function.
void display(freinds freinda){
    cout<<freinda.marks;
}
int main(){
    freinds f1(23);
    display(f1);

    return 0;
}