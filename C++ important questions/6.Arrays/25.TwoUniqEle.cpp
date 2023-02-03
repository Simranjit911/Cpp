#include <bits/stdc++.h>
// Bits manupulation
// For Two elements
// Every element repeating two times and we have to find the two unique element[1,1,2,2,3,4]
using namespace std;
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
    int res = 0;
    int res2=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            res = res ^ arr[i];
        }
        else{
            res2 = res2 ^ arr[i];
            
        }
    }
    cout << "Answer:" << res<<endl;
    cout << "Answer:" << res2;
}