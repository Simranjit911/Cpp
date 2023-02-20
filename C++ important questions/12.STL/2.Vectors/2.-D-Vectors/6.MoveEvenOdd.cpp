#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]%2==0){
                swap(v[i],v[j]);
            }
        }
    }
    
    cout<<"Result";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }


}