// Cannot be called manually
// No return type
// symbol used-~
// Called automatica;lly after main function;
// Destroys object
#include<bits/stdc++.h>
using namespace std;
class Demonstarte{
public:
    Demonstarte(){
        cout<<"Constructor"<<endl;
    }
    ~Demonstarte(){
        cout<<"Destructor Called"<<endl;
    }


};

int main(){
    Demonstarte D1;
    cout<<"Inside main function"<,endl;
    return 0;
}
