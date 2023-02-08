#include<iostream>
// Reverse the counting 
using namespace std;
int print(int n,int i){
    // base
    if(i>n){return {};}
    print(n,i+1);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    print(n,1);

}