#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void p(list<int> l){
    for(int x:l){
        cout<<x<<" ";
    }
}

/* Functions used on list would be the same as vector but it support operation on both ends

*/
int main(){
    list<int> l;
    l.push_back(10);
    l.push_front(20);
    l.emplace_back(30);
    l.emplace_front(40);
    p(l);

}