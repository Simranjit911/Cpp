#include<iostream>
using namespace std;
int fib(int n){
    if(n==0 or n==1) return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"Enter:";
    cin>>n;
    int ans=fib(n);
    cout<<ans;

}