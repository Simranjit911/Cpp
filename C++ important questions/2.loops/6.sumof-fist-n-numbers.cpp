#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to get the sum:";
    cin>>n;
    int sum=0;
    for(int i =1;i<=n;i++){
        cout<<i<<endl;
        sum +=i;

    }
    cout<<"="<<sum;
}