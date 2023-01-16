// C++ Program To Check Array Is Armstrong Or Not
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,rem,temp=0;
    cout<<"Enter:";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<" ok 1\n";
    for(int i=0;i<n;i++){
        temp=arr[i];
        while(temp!=0){
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;

            
        }
    // cout<<" ok 2 \n";     
        if(arr[i]==sum){
            cout<<arr[i]<<" Armstrong \n";
        }
        else{
            cout<<arr[i]<<" Not-Armstrong \n";

        }
    }
        return 0;
}