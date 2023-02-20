#include<iostream>
// Print name N times Using recursion
using namespace std;
int name(int n,int i){
    if(i>n)return {};
    cout<<"Simran "<<i<<endl;
    name(n,i+1);
}
int main(){
    int n;
    cin>>n;
    name(n,1);
}