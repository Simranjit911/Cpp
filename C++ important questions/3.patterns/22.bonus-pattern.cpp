#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter:";
    cin>>n;
    int j;
    int count=1;
    for(int i=1;i<=n;i++){
         int val=j;
        for( j=1;j<=i;j++){
          
            cout<<val<<" ";
            val=val+1;
        }
        cout<<endl;
    }

    return 0;
}