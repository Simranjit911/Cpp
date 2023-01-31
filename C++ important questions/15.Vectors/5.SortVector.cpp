#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter:";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    // sortv(v);
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (v[j] == 0)
        {
            swap(v[j], v[i]);
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}