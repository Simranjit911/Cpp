#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void call(deque<int> d){
     for(int x:d){
    cout<<x<<" ";
   }

}
int main(){
    /*
    Defination=Deque is Double ended queue
    1.Elements can be added trough both the sides

    **************************Majorly its has similar functions like vectors********************************


    
    
    
    */
   deque<int> d;
   d.push_front(20);//adds elelents from front
   d.push_back(10);//adds elelents from back
   d.push_back(10);
    d.push_front(20);
    d.emplace_back(30);
    d.emplace_front(40);
   call(d);
   cout<<endl;
   cout<<"element at 1st index:"<<d.at(1);
  


    
}