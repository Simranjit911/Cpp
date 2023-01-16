#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fib(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextT;
    for (int i = 1; i <= n; i++)
    {   
        cout<<t1<<endl;   
        nextT = t1+t2;
        t1 = t2;
        t2 = nextT;
    }
    
}
int main()
{
    int n;
    cout<<"Enter:";
    cin>>n;
    fib(n);
    return 0;
}