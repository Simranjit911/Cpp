// Check that array is sorted or not
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sor(int *arr,int i,int n){
    // int n=arr.size()-1;
    if(i>=n)return true;
    if(arr[i]>arr[i+1]) return 0;
    
    sor(arr,i+1,n);

}
int main(){
    int arr[]={2,4,9,8,9};
    
    int n=5;
    int ans=sor(arr,0,n);
    cout<<ans;

}
