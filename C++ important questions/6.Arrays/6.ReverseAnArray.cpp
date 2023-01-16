// C++ Program To Reverse An Array And Sum Of Its Element
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<i<<" has "<<arr[i]<<endl;
        sum=sum+arr[i];

    }
    cout<<"Reverse of array";
    for(int i=(n-1);i>=0;i--){
        cout<<arr[i]<<endl;
    }
    cout<<sum;
}