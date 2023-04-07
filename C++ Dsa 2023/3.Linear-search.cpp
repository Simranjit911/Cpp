
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"\n\n3.W.A.P to implement linear search on an array\n";
    int n;
    cout<<"Enter Size:\n";
    cin>>n;
    cout<<"Enter array:\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    bool flag=0;
    cout<<"Enter the element you want to search:\n";
    cin>>ele;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cout<<endl<<arr[i]<<" found at index:"<<i;
            flag=1;
            break;
        }     
    }
        if(flag==0)cout<<"\nNot found"  ;
    cout<<"\n\nThis program is developed by:\nSimranjit Singh\nBCA-Semester-4\nRoll No.219922";
}

