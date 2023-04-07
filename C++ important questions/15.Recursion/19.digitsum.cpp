#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int s(int n){
    if(n<=0 )return 0;
    
    return s(n/10)+n%10;
}
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    int ans=s(n);
    cout<<ans;
}