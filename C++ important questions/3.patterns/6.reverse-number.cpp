#include<iostream>
// 123456
// 12345 
// 1234  
// 123   
// 12 
using namespace std;
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;

     }
        
     
}