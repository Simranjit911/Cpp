// C++ Program To Print Element Of An Array
// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<i<<" has "<<arr[i]<<endl;;
        sum=sum+arr[i];
    }
    cout<<endl<<sum;
    
}