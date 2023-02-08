// Find the power =2 to the power 5=32 answer
// power of two
#include<iostream>
using namespace std;
int pow(int n){
    // base case
    if(n==0)return 1;
     return 2*pow(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=pow(n);
    cout<<ans;
}