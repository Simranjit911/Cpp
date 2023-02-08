#include<iostream>
using namespace std;
// Add the given number individually like 123=1+2+3=6ans
int f(int n){
    if(n>=0 && n<=9) return n;
    return f(n/10)+(n%10);
}
int main(){
    int n=1234;
    int ans=f(n);
    cout<<ans;

}