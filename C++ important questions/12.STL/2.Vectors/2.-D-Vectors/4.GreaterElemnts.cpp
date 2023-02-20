#include<bits/stdc++.h>
// Print greater elements than x
using namespace std;
int main(){
    vector<int>v(6);
    cout<<"Enter vector elements:";
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x";
    cin>>x;
    for(int el:v){
        if(el>x){
            cout<<el<<endl;
        }
    }
}