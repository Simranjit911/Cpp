#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// E 
// D E
// C D E
// B C D E
// A B C D E
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}