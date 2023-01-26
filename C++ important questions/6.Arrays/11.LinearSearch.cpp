#include <iostream>
// Time complexicity is O(n)
using namespace std;
int linearsrch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter no. of elements:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key:";
    int key;
    cin >> key;
    cout << linearsrch(arr, n, key);
}
