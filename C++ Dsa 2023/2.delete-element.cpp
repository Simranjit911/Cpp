// 2.WAP to insert an element into array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"\n\n2.W.A.P to delete an element from array\n";
    int n;
    cout<<"Enter Size:\n";
    cin>>n;
    cout<<"Enter array:\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements of array before deleting:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter element you want to delete:\n";
    int ele;
    cin>>ele;
    for(int i=arr[ele];i<n;i++){
        arr[i]=arr[i+1];
    }
    cout<<"Elements of array after deleting:\n";
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
        cout<<"\n\nThis program is developed by:\nSimranjit Singh\nBCA-Semester-4\nRoll No.219922";
}

