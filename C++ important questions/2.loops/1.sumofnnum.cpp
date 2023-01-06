#include<iostream>
using namespace std;
// sum of fist n natural numbers
int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a;
    int s=0;
    for(int i=1;i<=a;i++){
        s=s+i;
    }
    cout<<s;
}