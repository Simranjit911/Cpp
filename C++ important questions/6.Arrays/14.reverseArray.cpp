#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s += 1;
        e -= 1;
    }
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    
    // int rev=reverse(arr,n);
    // cout<<arr;
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl<<arr;

}