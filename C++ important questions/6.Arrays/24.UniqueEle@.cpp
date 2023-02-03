#include<bits/stdc++.h>
// Bits manupulation
// Every element repeating two times and we have to find the single unique element[1,1,2,2,3,]

using namespace std;
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    cout<<"Answer:"<<res;

}