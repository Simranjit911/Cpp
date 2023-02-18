#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// check that string is palindrome or not
bool pal(int i,string &sent){
    if(i>=sent.size()/2) return true;
    if(sent[i] != sent[sent.size()-i-1])return false;
    
    pal(i+1,sent);

}

int main(){
    string sent;
    cout<<"Enter:";
    cin>>sent;
    int ans=pal(0,sent);
    cout<<ans;
}