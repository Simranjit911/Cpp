#include<iostream>
// The sum of last two number=0 1 1 2 3 5 8
using namespace std;
int fib(int n){
    // base case
    if(n<2) return 1;
    return fib(n-2)+fib(n-1);
   
}
int main()
{
    int n;
    cout<<"Enter:";
    cin>>n;
    int ans=fib(n);
    cout<<ans;

}