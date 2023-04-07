// Sum of total elements of the array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    if(n<0)return 0;
    return sum(arr,n-1)+arr[n];   

}

int main(){
    int arr[5]={3,2,5,1,6};
    // int n=arr.length();
    int n=5;
    int ans=sum(arr,2);
    cout<<ans;
}