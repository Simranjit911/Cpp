
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"\n\n4.W.A.P to implement binary search on an array\n";
    int n;
    cout<<"Enter Size:\n";
    cin>>n;
    cout<<"Enter array in ascending order:\n";
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int x;
    bool flag=0;
    cout<<"Enter the element you want to search:\n";
    cin>>x;
   
    int low=0;
    int high=n;
     while (low <= high) {
    int mid = low + (high - low) / 2;

    if(array[mid] == x){
      cout<<endl<<array[mid]<<" found at index:"<<mid;
      flag=1;
      break;
    }

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  
        if(flag==0)cout<<"\nNot found"  ;
    cout<<"\n\nThis program is developed by:\nSimranjit Singh\nBCA-Semester-4\nRoll No.219922";
}


