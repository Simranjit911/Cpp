#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int evensum=0;
    int oddsum=0;
    for(int i=1;i<n;i++){
        if(i%2==0){
            evensum=evensum+arr[i];
        }
        else{
           oddsum=oddsum+arr[i];
        }
    }
    evensum=evensum+arr[0];
    int total=evensum-oddsum;
    cout<<total;
}