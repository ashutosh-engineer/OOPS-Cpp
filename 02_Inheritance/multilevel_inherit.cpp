#include<bits/stdc++.h>
using namespace std;

class Ashutosh{
private:
    int id=12;
    int rollnumber=12345;
    string name="Ashutosh";


public:  
// So this is an Exmaple of Encapulsation
    void ashutosh_Details(){
        cout<<"The id is:"<<id<<endl;
        cout<<"The rollnumber is:"<<rollnumber<<endl;
        cout<<"The name is: " <<name;
    }
};
class Deepak : public Ashutosh{
private:
    int ids =1234;
    int rollcall=138797;
    string names="Deepak";

public:
    void Deepak_Details(){
        cout<<"The id is:"<<ids<<endl;
        cout<<"The rollnumber is:"<<rollcall<<endl;
        cout<<"The name is: " <<names;

    }

};

class All_Details : public Deepak{
public:
    void all_Details(){
        // I will call all the details here
        cout<<"All Details of the students"<<endl;
        ashutosh_Details();
        Deepak_Details();
    }

};

int main(){
    All_Details al;
    al.all_Details();
    return 0;
}