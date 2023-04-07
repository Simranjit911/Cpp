#include<iostream>
using namespace std;
// ********************
// *********  *********
// ********    ********
// *******      *******
// ******        ******
// *****          *****
// ****            ****
// ***              ***
// **                **
// *                  *
// *                  *
// **                **
// ***              ***
// ****            ****
// *****          *****
// ******        ******
// *******      *******
// ********    ********
// *********  *********
// ********************
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
   //upper side
   for(int i=0;i<n;i++){
    //star
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    //space 
    for(int k=0;k<2*i;k++){
        cout<<" ";
    }
    //star
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }cout<<endl;
   }
   
   //lower
   for(int i=n-1;i>=0;i--){
    //star
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    //space 
    for(int k=0;k<2*i;k++){
        cout<<" ";
    }
    //star
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }cout<<endl;
   }
}