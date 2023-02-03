#include <bits/stdc++.h>
using namespace std;
// Find the pair in the array whose sum is exactlt equal to the x
int main()
{
    int arr[5] = {-1, 0, 1, 2, 3};
    int x = 3;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; ++j)
        {
            if (arr[i] + arr[j] == x)
            {
                cout <<arr[i] << " " << arr[j]<<endl;
                // cout<<"yes";

            }
            else
            {
                cout << "";
            }
        }
    }
}