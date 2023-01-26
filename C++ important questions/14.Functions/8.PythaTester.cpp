#include<iostream>
using namespace std;
int pytha(int x,int y,int z){
    int maxi;
    if(x>y && x>z){
        maxi=x;
    }
    else if(y>x && z>x){
        maxi=y;
    }
    else{
        maxi=z;
    }
    maxi=maxi*maxi;
   



}
int main(){
    int a,b,c;
    cout<<"Enter:";
    cin>>a,
    cin>>b;
    cin>>c;
    cout<<pytha(a,b,c);
}