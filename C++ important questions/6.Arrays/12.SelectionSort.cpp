// Swap first element with last element
#include <iostream>
using namespace std;
int selectionsort(int arr[], int n, int key)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
        cout<<" Sorted Array: \n" ;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n, arr[n], key;
    cout << "Enter:";
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << selectionsort(arr, n, key);
}