#include<iostream>
using namespace std;
    int add(int a,int b)
    {
        // cout<<a+b;
        return a+b;
    }
int main(){
    int a=25;
    int b=25;
    cout<<add(a,b)<<endl;
    add(10,20);
}