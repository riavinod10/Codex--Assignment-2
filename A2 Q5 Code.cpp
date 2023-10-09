#include <iostream>
#include <string.h>
using namespace std;

int main(){
    const string pass="Password";
    string a;
    while(true){
        cout<<"\nEnter password: ";
        cin>>a;
        if(a==pass){
            cout<<"\nPassword is correct :)"<<endl;
            break;
        }
    }
    return 0;
}