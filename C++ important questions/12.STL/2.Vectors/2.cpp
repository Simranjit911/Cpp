#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>c;//We can add any Container in it according to need 
    vector<int> v;
    //Taking input like array
    int n;
    cout<<"Enter:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);//Complexicity=O(1);
    }
    cout<<"\nPrinting all elements using for each loop\n";
    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl<<"capacity:";
    cout<<v.capacity();
    cout<<endl<<"Size:";
    cout<<v.size();


    //**********************************Important Functions of vector*******************************************
    /*
    0.1.emplace_back()=Similar to the push_back but dynamically increase the size 
    1.pop_back()=Removes the last element of the vector
    2.size()=Gives the size of the vector
    3.capacity()=Shows that how much elements can a vector store
    4.push_back()=Adds eleemets in the last of the array
    5.vector<int> v2=v;This copies the all elements of vector v to the v2  takes O(n) time.
     Use the reference of the vector instead of the copy using & sign
    6.resize(5 or any no.)=used to resize the vector 
    7.clear()=Used to clear the vector,Size will b 0 but capacity will reain same
    8.empty()=If vector is empty than return true otherwise false
    9.erase()=used to erase th particular position
    10.sort(v.begin,v.end())=Used to sort the vector
    11.v.reverse(v.begin(),v.end())=Used to reverse the vector
    12.begin()=Its a iterator used to point the first elelement of the vector
    eg=v.erase(v.begin()+1);
    13.end()=It point the last elelement
    14.insert(position,value)=Used to insert the element in vector
    15.v.at(2)=Print the element at 2nd index
    16.v.front()=Return the first element
    17.v.back()=Return the last element
    18.v.erase(start,end);
    19.vector<int> x(v);==This will copy the vector here
    20.v.swap(v2);v={1,2},v2={3,4} after swap=v={3,4} and v={1,2};
    21.v.clear()=clears everything

    
    */

   /*Iterators*/
   cout<<"\nIterators\n";
   vector<int>::iterator it=v.begin();
   //    it++;
      cout<<*(it)<<" ";
   
   //    vector<int>:: iterator it=v.end();
   //    vector<int>:: iterator it=v.rend();
   //    vector<int>:: iterator it=v.rbegin();
   cout<<endl;
   cout<<v[0]<<" "<<v.at(0)<<endl;
   cout<<v.back()<<" ";
   //For each loop
   for(auto it:v){
       cout<<it<<" ";
   }

   //erasing
   v.erase(v.begin()+1);
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
}