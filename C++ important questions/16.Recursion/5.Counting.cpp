#include<iostream>
// Print counting with the recursion
using namespace std;
int count(int n){
    // base condition
    if(n==0)
    {return {};} 
    
    // cout<<n<<endl; This is tail recursion
    // count(n-1);
    
    count(n-1);
    cout<<n<<endl; //This is head recursion


}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    count(n);
    

}