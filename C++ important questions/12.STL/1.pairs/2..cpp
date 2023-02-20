#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p;
    p=make_pair(2,3);//1st way of initializing

    cout<<p.first<<" "<<p.second<<endl;
    //nested pair
    pair<int,pair<int,int>> p2;
    p2={3,{4,5}}; //direct way of initializing
    cout<<p2.second.first;

    //Pairs array
    cout<<"\nArray\n";
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    // index               0      1     2
    //accesing the array pair
    cout<<arr[0].first<<arr[0].second<<" "<<arr[1].first<<arr[1].second;
    //Print all arrayy
    //swap
    swap(arr[0],arr[2]);
    cout<<"\nAll elements\n";

    for(int i=0;i<3;i++){
        cout<<arr[i].first<<""<<arr[i].second<<" \n";
    }cout<<endl;
}