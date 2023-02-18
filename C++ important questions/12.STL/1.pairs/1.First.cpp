// pair are used to store 2 variables
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pairs(){
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> p1={3,"Hello"};
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int,pair<int,int>> p2={4,{5,6}}; //pair inside pair
    cout<<p2.first<<" "<<p2.second.second<<" "<<" "<<p2.second.first<<endl;
    pair <int,int> arr[]={{1,2},{3,5},{4,5}};
    // pair has the index=  0      1     2  to ac
    cout<<arr[1].second<<" "<<arr[0].first;

    

}
int main(){
    int n;
    // cout<<"Enter:";
    // cin>>n;
    pairs();
}