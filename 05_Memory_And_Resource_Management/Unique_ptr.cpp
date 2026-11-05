// Smart pointers are the the template class 
// Three types weak, shared , unique pointers;
// The datatype written inisde enclosed brackets they manage that type of data
// only;

// Unique_ptr
// Unique_ptr can hold only 1 object at a time;
// Lightweight and efficient
// Ideal for single ownership Scenarios;
// make_unique() is safer way to create Unique ptrs;

#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    int length , breadth;
public:
    Rectangle(int l , int b):length(l), breadth(b){}
    int area(){
        return length*breadth;
    }
};
int main(){
    unique_ptr<Rectangle>ptr1= make_unique<Rectangle>(10,5);
    cout<<ptr1->area()<<endl;
    unique_ptr<Rectangle>ptr2=move(ptr1);
    cout<<ptr2->area();
    return 0;
}