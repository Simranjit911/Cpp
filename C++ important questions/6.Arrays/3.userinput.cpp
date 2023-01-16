#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter:";
    cin>>n;
    int age[n];
    for(int i=0;i<n;i++){
        cin>>age[i];

    }
    for(int i=0;i<n;i++){
        cout<<i<<" has value "<<age[i]<<endl;
    }
}