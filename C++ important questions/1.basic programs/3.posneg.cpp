#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a;
    if(a>0){
        cout<<"Number is Positive";
    }
    else if(a==0){
        cout<<"The number is 0";
    }
    else{
        cout<<"The number is negative";
    }
    return 0; 
}