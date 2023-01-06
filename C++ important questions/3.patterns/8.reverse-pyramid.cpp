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
int main(){
    int n;
    cout<<"ENter :";
    cin>>n;
    for(int i=n;i>1;i--){
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        for(int k=1;k<i;k++){
            cout<<"*";
            cout<<" ";
        }
        cout<<"\n";
    }

}