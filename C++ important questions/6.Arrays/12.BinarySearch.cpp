#include<iostream>
// Time complexicity=O(logn by 2)
using namespace std;
int Binarysrch(int arr[],int n,int key){
    int low=0;int high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
           return mid;
        else if(arr[mid]>key)
           high=mid-1;
        else
           low=mid+1;
    }
    return -1;


}
int main(){
    int n,key,arr[n];
    cout<<"Enter";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key";
    cin>>key;
    cout<<Binarysrch(arr,n,key);

}
