#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        //characters
        char ch='A';
        int breakpt=(2*i-1)/2;
        for(int j=1;j<=2*i +1;j++){
            cout<<ch;
            if(j<=breakpt)ch++;
            else ch--;
        }
        //spaces
        for(int l=0;l<n-i-1;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}