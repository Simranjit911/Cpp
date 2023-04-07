#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f(int arr[],int k,int n){
    if(arr[0]==k)return arr[0];
    else{
        return f(arr+1,k,n);
    }
   

}
int main(){
    int arr[]={6,5,8,5,9,8};
    int k;
    cout<<"Enter:";
    cin>>k;
    cout<<f(arr,k,6);
}