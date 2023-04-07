#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    In this the elelement can be the max or min 
    the guy who has largest value stays at top

    main functions=push,pop,top;

    */
//    max_heap
      priority_queue<int> maxi;
      
    //   Min_heap
    priority_queue<int,vector<int>,greater<int>> mini;
    //Maxheap inserting
    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(2);
    maxi.emplace(9);

    //Minheap inserting
    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(2);
    int n=maxi.size();

    cout<<"\nMaxheap:\n";
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    int m=mini.size();
    cout<<"\nMinheap:\n";
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<maxi.top();//print =9;


}