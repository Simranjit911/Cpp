// 1.WAP to insert an element into array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"\n\n1.W.A.P to insert an element into array\n";
    int n;
    cout<<"Enter Size:\n";
    cin>>n;
    cout<<"Enter array:\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements of array are:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<"\n\nThis program is developed by:\nSimranjit Singh\nBCA-Semester-4\nRoll No.219922";
}

