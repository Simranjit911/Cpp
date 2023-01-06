#include<iostream>
// To print the first n even numbers
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    for(int i =1;i<=n;i++){
        // cout<<i<<endl;
        if(i%2==0){
            cout<<i<<endl;
            sum=sum+i;

        }
        else{
            cout<<"";

        }
    }
    cout<<"Sum:"<<sum<<" \n";
    cout<<"Program completed";

}