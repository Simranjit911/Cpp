#include <bits/stdc++.h>
using namespace std;
void check(vector<int> v)
{
    int total;
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i - 1] + v[i];
        total = v[i];
    }
    cout<<total<<endl;
    int total2 = total / 2;
    cout<<total2;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] + v[i + 1] || +v[i + 2] == total)
        {
            cout << "True";
        }
    }
}

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

    check(v) ;
}
