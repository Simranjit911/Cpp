// Vectors r dynamic in the nature 
/* Important points
1.Dynamic in nature 
2.Size can be increased according to need
3.Not like array [means fixed in size]
4.Store data like array
5.Its double its size once filled
*/

//All important notes
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    // Capacity=It shows that how much elements a vector can store
    // Size=Size shoes that how much elements a vector currently have
    cout<<"Capacity :"<<v.capacity()<<endl;
    cout<<"Size :"<<v.size()<<endl;
    v.push_back(1);
    cout<<"After adding 1"<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;
    cout<<"Size :"<<v.size()<<endl;
    v.push_back(5);
    cout<<"After adding 2"<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;
    cout<<"Size :"<<v.size()<<endl;
    v.push_back(0);
    cout<<"After adding 3"<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;
    cout<<"Size :"<<v.size()<<endl;
    cout<<"Traversing every element \n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<"After sort\n";
    // Binary search
    sort(v.begin(),v.end()); 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<binary_search(v.begin(),v.end(),9)<<endl;

    cout<<"At 2nd index:"<<v.at(2)<<endl;
    cout<<"First element:"<<v.front()<<endl;
    cout<<"Last element:"<<v.back()<<endl;
    cout<<"Before Pop \n";
    for(int a:v){
        cout<<a<<" ";
    }
    v.pop_back();//Remove last element from the vector
    cout<<"\nAfter Pop \n";
    for(int a:v){
        cout<<a<<" ";
    }
    cout<<"\nCapacity:"<<v.capacity();
    cout<<"\nSize:"<<v.size();
    cout<<"\nBefore clear Size nd capacity:"<<v.size()<<" "<<v.capacity();
    v.clear();//Clear will empty the set but capacity will remain same
    cout<<"\nAfter clear Size nd capacity:"<<v.size()<<" "<<v.capacity();



    vector <int> b(5,1);//Vector size is 5 and every element is initialized with 1
    vector <int> c(b);//Created a vector c with copying elements of the b vector;
    cout<<endl;
    for(int v:c){
        cout<<v<<" ";
    }
    v.swap(b);//swap the elements of v and b
    // v.erase(); 

}