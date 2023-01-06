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
     for(int i=n;i>0;i--){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
     }
}