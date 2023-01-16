#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    int sum=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<"Index "<<i<<" has "<<a[i]<<endl;
    }

    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"sum:"<<sum;


}
