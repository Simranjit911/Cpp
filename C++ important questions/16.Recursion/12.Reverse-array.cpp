#include<iostream>
// #include<bits/stdc++.h>
using namespace std;
void rev(int i,int n,int arr[]){
    if(i>=n/2)return ;
    swap(arr[i],arr[n-i-1]);
    rev(i+1,n,arr);
    

}
int main(){
    int n=5;
    // cout<<"Enter:";
    // cin>>n;
    int arr[5]={2,4,1,3,5};
    rev(0,5,arr);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    // cout<<arr;6,19.58



}