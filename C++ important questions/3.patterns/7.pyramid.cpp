#include<iostream>
using namespace std;
//          *
//         * *
//        * * *
//       * * * *
//      * * * * *
//     * * * * * *
//    * * * * * * *
//   * * * * * * * *
//  * * * * * * * * *
// * * * * * * * * * * 
int main(){
    int n;
    cout<<"Enter :";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
            cout<<" ";
        }

    cout<<endl;
    }

}