#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(6);
    cout<<"Enter vector elements:";
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x:";
    cin>>x;
    int occr=0;
    for(int el:v){
        if(el==x){
            occr++;
        }
    }
    cout<<endl<<occr;
}