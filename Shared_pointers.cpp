// Shared pointer allows multiple pointer to share the ownership;
// Uses refrence counting to manage object lifetime;
// make_shared is recomended to create shared_ptr;

#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    int length , breadth;
public: 
    Rectangle(int l , int b): length(l), breadth(b){}
    int area(){
        return length * breadth;
    }
};
int main(){
    shared_ptr<Rectangle>ptr1 = make_shared<Rectangle>(10, 5);
    cout<<ptr1->area()<<endl;

    shared_ptr<Rectangle>ptr2= ptr1;
    cout<<ptr2->area();
    cout<<ptr1.use_count();

    return 0;
}

// In this make_shared creates a shared pointer
// Where use_count tracks the use_count of the pointer
// Object will be destroyed when use_count became 0;