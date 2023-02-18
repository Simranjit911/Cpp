#include<iostream>
using namespace std;
// ABCDE
// ABCD
// ABC
// AB
// A
// ABCDE
// ABCD
// ABC
// AB
// A

int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    for(int i=n;i>=1;i--){
       for(char ch='A';ch<'A'+i;ch++){
        cout<<ch;
       }
        cout<<endl;
    }
}