#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
     cout << "\n\n7.W.A.P to sort elements using Selection sort\n";
    int n, i;
    cout << "\nEnter the size: ";
    cin >> n;
    cout<<"\nEnter Elements:\n";
    int arr[n];
    for (i = 0; i < n; i++)
    {
        // cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
     cout<<"\nArray before Selection Sort:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    // Sorting algo
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){min=j;}
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

   // Printing the sorted data.
    cout <<"\n\nSorted Data:\n";
    for (i = 0; i < n; i++){        
        cout<<arr[i]<<" ";
    }
    cout << "\n\nThis program is developed by:\nSimranjit Singh\nBCA-Semester-4\nRoll No.219922";
    return 0;

}