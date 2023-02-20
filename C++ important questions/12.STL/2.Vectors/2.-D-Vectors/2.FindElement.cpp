// the last occurence of the element
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(6);

    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter:";
    cin>>x;
    int occurence=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x)
        occurence=i;
    }
// Traversing vector from last element
    // for(int i=v.size()-1;i>=0;i--){
    //     if(v[i]==x)
    //     occurence=i;
    //     break;

    // }
    cout<<occurence;

}