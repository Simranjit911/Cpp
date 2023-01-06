#include<iostream>
// To print the sum of first n natural numbers
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<"";
        }
        else{
            cout<<i<<endl;
            sum += i;
        }
        // cout<<"sum:"<<sum;
    }
         cout<<"Sum:"<<sum<<" \n";
}