#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// 1               1
// 12             12
// 123           123
// 1234         1234
// 12345       12345
// 123456     123456
// 1234567   1234567
// 12345678 12345678
// 123456789123456789
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    for(int i=n;i>=0;i--){
        //num
        for(int j=1;j<=n-i-1;j++){
            cout<<j;
        }
        //space
        for(int k=0;k<2*i-1;k++){
            cout<<" ";
        }
        //num
        for(int j=1;j<=n-i-1;j++){
            cout<<j;
        }cout<<endl;
    }
}