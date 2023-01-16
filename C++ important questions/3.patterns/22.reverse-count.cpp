#include<iostream>
using namespace std;
// 1
// 21
// 321
// 4321
// 54321
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<i-j+1;
        }
        cout<<endl;
    }
}