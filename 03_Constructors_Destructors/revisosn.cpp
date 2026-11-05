#include<bits/stdc++.h>
using namespace std;
class Copy{
public:
    int id;
    string hey;

    Copy(const Copy& older_value){
        id=older_value.id;
        hey = older_value.hey;
    }

    // Copy assignment operator
    Copy& operator=(const Copy& older_value){
        id = older_value.id;
        hey = older_value.hey;
        return *this;
    }

};

int main(){




    return 0;
}