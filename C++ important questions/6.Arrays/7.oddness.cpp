// C++ Program To Check Evenness And Oddness In An Array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" Even ";

        }
        else{
            cout<<arr[i]<<" odd ";
        }
    }
}