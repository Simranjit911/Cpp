#include<iostream>
// find unique no. in array
using namespace std;
int main(){
    int n;
    cout<<"Enter no.";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }

    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>0){
        cout<<"answer";
        cout<<arr[i]<<endl;
        }
    }
    


}