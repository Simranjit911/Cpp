#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void p(list<int> l){
    for(int x:l){
        cout<<x<<" ";
    }
}

/* Functions used on list would be the same as vector

*/
int main(){
    list<int> l;
    l.push_back(10);
    l.push_front(20);
    p(l);

}