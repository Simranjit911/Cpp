#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool s(int arr[],int n){
    if(n==0 || n==1)return 1;
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        // return 1;
    s(arr+1,n-1);
    }


}
int main(){
    // int n;
    // cout<<"Enter:";
    // cin>>n;
    int arr[]={1,2,3,4,5};
    int ans=s(arr,5);
    cout<<ans;



}