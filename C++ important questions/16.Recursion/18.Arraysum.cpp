// Sum of an array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int s(int arr[],int n){
    if(n==1)return arr[0];
    return arr[0]+s(arr,n-1);

}
int main(){
   int arr[]={1,2,3,4,5};
   int ans=s(arr,5);
   cout<<ans;
}