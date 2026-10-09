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

    friend void display(freinds freinda);
};
void display(freinds freinda){
    cout<<freinda.marks;
}
int main(){
    freinds f1(23);
    display(f1);

    return 0;
}