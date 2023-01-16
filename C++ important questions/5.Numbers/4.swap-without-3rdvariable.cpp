#include<iostream>
using namespace std;
int swapp(int a,int b){
    
    cout<<"Before swap:\nA:"<<a<<" B:"<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter swap:\nA:"<<a<<"B:"<<b;
    

}
int main(){
    int x,y;
    cout<<"Enter x and y:";
    cin>>x>>y;
    swapp(x,y);

}