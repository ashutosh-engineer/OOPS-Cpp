#include<bits/stdc++.h>
using namespace std;
class teacher{
public:
    string name;
    int id;
    string dept;
    string subject;
    float salary;
    // Attribuutes;

     void chnagedept(string dept){
        string newDept;
        cout<< "Enter new department name:";
        cin>>newDept;
        dept=newDept;
     }
        // Memeber functions
     void showsalary(string name , float salary){
        cout<<"The salary for teacher " << name << "is" << salary;
     }

    //  Protected;
    // Can be acessed in class and child class protected it used

    // Private cant be used outside of class;


};

int main(){
    teacher t1;
    return 0;
}

// There type of acess modifers;
//Public , private , protected;