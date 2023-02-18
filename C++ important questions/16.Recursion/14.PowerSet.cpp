#include<iostream>
#include<bits/stdc++.h>
// Power set me array k sabhi sets hote hai bus " " empty string ko shod k

// Learn from other resource not cleared
using namespace std;
void ps(string s,string temp,int ind){
    if(s.size()==ind){
        cout<<temp<<" ";
        return;
    }
    // take
    ps(s,temp+s[ind],ind+1);
    // nottake
    ps(s,temp,ind+1);
    return;
}
int main(){
    vector<string> aps(string s){
        vector<string> ans;
        ps(s," ",0);
        return ans;
        
    }
}
