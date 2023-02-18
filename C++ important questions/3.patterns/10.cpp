#include<iostream>
using namespace std;
// *   
// **  
// *** 
// ****
// *****
// ****
// ***
// **
// *
int main(){
    int n;
    cout<<"ENter :";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }
    //upperside
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
            cout<<endl;
    }
    //lowerside
    // for(int i=n;i>=0;i--){ //using reverse loop outside
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //         cout<<endl;
    // }
    //Or 
    //lower
     for(int i=0;i<n;i++){
        for(int j=i;j<=n;j++){   //using j=i;
            cout<<"*";
        }
            cout<<endl;
    }
}