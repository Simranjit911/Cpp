#include<iostream>
using namespace std;
//         *
//        * *
//       * * *
//      * * * *
//     * * * * *
//    * * * * * *
//   * * * * * * *
//  * * * * * * * *
// * * * * * * * * *
// * * * * * * * * *
//  * * * * * * * * 
//   * * * * * * *
//    * * * * * *
//     * * * * *
//      * * * *
//       * * *
//        * *
//         *
int main(){
    int n;
    cout<<"Enter :";
    cin>>n;
    for(int i=1;i<=n;i++){
        // spacing
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=1;k<i;k++){
            cout<<"*";
            cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=n;i>1;i--){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=1;k<i;k++){
            cout<<"*";
            cout<<" ";
        }
        cout<<"\n";
    }
}