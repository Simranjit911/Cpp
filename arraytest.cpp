#include<iostream>
using namespace std;
int linearsrch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
            break;
        }

    }
    return -1;
}
int binarysrch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        int s=0;
        int e=n;
        while(s<=e){
            int m=(s+e)/2;
            if(arr[m]==key)
             return m;
            else if(arr[m]>key){
                e=m-1;
            }
            else{
                s=m+1;

            }
        }

    }
}
int main(){
    int n,key;
    cout<<"Enter :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key";
    cin>>key;
    // int index=linearsrch(arr,n,key);
    int index2=binarysrch(arr,n,key);
    // cout<<index;
    cout<<index2;

}