#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    /*Set=Set stores only the unique element
    2.gives output in the sorted order

    functionality of used in vector that can also be used that increase efficiency
    functions same as vector
    
    */
   set<int> s;
   s.insert(5);
   s.insert(4);
   s.insert(3);
   s.insert(8);
   s.emplace(9);
   for(auto x:s){
    cout<<x<<" ";
   }cout<<endl;

   set<int>::iterator it=s.begin();
//    it++;

   s.erase(it);

   for(auto x:s){
    cout<<x<<" ";
   }
   cout<<endl<<s.count(8);//It tells that element available or not
   auto it=s.find(8);


   //Multiset
   /*Everything same as set but stores the duplicate values */
   multiset<int>ms;
   //Unordered set 
   //same as set but in unsorted  order


}