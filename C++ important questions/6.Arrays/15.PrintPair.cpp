#include<iostream>
using namespace std;
void printpairs(int arr[],int n){
    for(int i=0;i<n;i++){
        int x=arr[i];
        for(int j=i+1;j<n;j++){
            int y=arr[j];
            cout<<x<<","<<y<<endl;
        }
        cout<<endl;

    }
}

int main(){
    int n;
     cout<<"Enter:";
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
    //  This is for each loop for accesiing every element in the array
    //  cout<<"Answer:";
    //  for(int x:arr){
    //     cout<<x<<endl;
    //  }
    printpairs(arr,n);

}