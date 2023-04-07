#include<iostream>
using namespace std;
int main(){
    // Character is in upper case lowercase ot num
    char a;
    cin>>a;
    if(a>=65 && a<=90){
        cout<<"This is uppercase";
    }
    else if(a>=97 && a<=122){
        cout<<"This is lowercase";
    }
    else if(a>=48 && a<=57){
        cout<<"This is number";

    }



}