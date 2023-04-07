#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    /*Stacks=Based on the LIFO concept (Last in First Out)
    there is no indexing used in stacks 
    only 3 functions push,back,pop
    */

    stack<string> s;
    s.push("Hello");
    s.push("my Name is");
    s.push("Simran");
    cout<<s.top();//Simran is answer bcoz it added in last in stack
    cout<<"\nSize:"<<s.size();
    cout<<"\nempty:"<<s.empty();
}