#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int largest(int arr[], int n)
{

    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        cout << "Largest element " << arr[n - 1] << endl;
        cout << "Second Largest element " << arr[n - 2] << endl;
        // cout<<arr[n-2]<<" ";
        break;
    }
}

int main()
{
    int n;
    cout << "Enter:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // cout<<"Second largest element:";
    largest(arr, n);
    // int ans=largest(arr,n);
    // cout<<"Ans "<<ans;
    // arr[largest
}