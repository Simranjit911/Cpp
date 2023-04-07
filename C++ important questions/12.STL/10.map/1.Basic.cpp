#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Stores data in key values
the key or value can be or any data structure*/
int main(){
    map<int,string> m;
    m[1]="Mercedes G63";
    m[2]="Urus";
    m[3]="Bugatti";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<"  ";
    }
}