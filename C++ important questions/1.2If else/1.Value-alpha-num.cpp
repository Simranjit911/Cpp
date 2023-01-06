#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter any key:";
    cin>>a;
    if(a>=65 && a<=90){
        cout<<"Character is in uppercase";
    }
    else if(a>=97 && a<=122)
    {
        cout<<"Is in lowercase";
    }
    else if(a>=48 && a<=57){
        cout<<"This is numeric value";
    }


}