#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//vector of pair
int main(){
    vector<pair<int,int>>v;
    v={{1,2},{3,4},{5,6}};
    cout<<"Print All elelemets of the vector:\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<v[i].second<<endl;
    }

   
}