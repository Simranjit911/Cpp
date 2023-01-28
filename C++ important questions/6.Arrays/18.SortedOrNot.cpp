#include<iostream>
// To check that array sorted or not
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool sorted=true;
    for(int i=1;i<n;i++){
        // arr[i]<=arr[i-1]
        if(arr[i-1]>=arr[i]){
            sorted=false;            
        }        
    }
    if(sorted==true){
        cout<<"Sorted";
    }
    else{
        cout<<"not ";
    }

}