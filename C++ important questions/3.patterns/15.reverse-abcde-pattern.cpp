#include<iostream>
using namespace std;
// ABCDE
// ABCD
// ABC
// AB
// A

int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    for(int i=n;i>=1;i--){
        char cnt='A';
        for(int j=1;j<i;j++){
            cout<<cnt++;
        }
        cout<<endl;
    }
}