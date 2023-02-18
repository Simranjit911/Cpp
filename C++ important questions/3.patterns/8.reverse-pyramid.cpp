#include<iostream>
using namespace std;
//  * * * * * * * * *
//   * * * * * * * *
//    * * * * * * *
//     * * * * * *
//      * * * * *
//       * * * * 
//        * * *
//         * *
//          *
// *********
//  *******
//   *****
//    ***
//     *  

int main(){
    int n;
    cout<<"ENter :";
    cin>>n;
    // for(int i=n;i>1;i--){
    //     for(int j=i;j<=n;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<i;k++){
    //         cout<<"*";
    //         cout<<" ";
    //     }
    //     cout<<"\n";
    // }
    for(int i=n-1;i>=0;i--){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}