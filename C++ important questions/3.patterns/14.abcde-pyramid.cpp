#include<iostream>
using namespace std;
// A 
// AB
// ABC
// ABCD
// ABCDE
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    for(int i=1;i<=n;i++){
        char cnt='A';
        for(int j=1;j<=i;j++){
            cout<<cnt++;

        }
        cout<<endl;
    }
}