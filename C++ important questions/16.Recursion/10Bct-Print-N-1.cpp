#include<iostream>
using namespace std;
int print(int i){
    // base
    if(i<1) return{};
    cout<<i<<endl;
    print(i-1);
}
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    int i=n;
    print(i);
}