#include<iostream>
// Printing the table
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to print the table:";
    cin>>n;
    for(int i=0;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;

    }
}