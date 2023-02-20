#include<iostream>
#include<bits/stdc++.h>
// Sum of the first n numbers
using namespace std;
int add(int n){
    if(n==0) return 0;
    return n+add(n-1);
    // cout<<sum;

}
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    int sum=add(n);
    cout<<sum;
}