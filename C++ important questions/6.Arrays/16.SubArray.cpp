#include <iostream>
using namespace std;
// Sum of subarray=https://www.youtube.com/watch?v=ZqcoBKElSRY&list=PLvs_MVh9gNETejqZM9f2_Qwk5vPvotg2Z&index=14
void subarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << endl;
        }
    }
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subarr(arr, n);
}

