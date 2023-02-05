#include <bits/stdc++.h>
// Find the maximum no. of 1 in the line in sorted array
using namespace std;
int noofone(vector<vector<int>> &V)
{
    int maxones = INT_MIN;
    int maxonerow = -1;
    int col = V[0].size();
    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j < V[i].size(); j++)
        {
            if (V[i][j] == 1)
            {
                int numofones = col - j;
                if (numofones > maxones)
                {
                    maxones = numofones;
                    maxonerow = i;
                }
            }
    return maxonerow;       
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter:";
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    int res = noofone(vec);
    cout << res << endl;
}