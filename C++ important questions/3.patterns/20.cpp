#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
int main()
{
    int n;
    cout << "Enter:";
    cin >> n;
    // upper
    for (int i = n; i > 0; i--)
    {
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    //lower
    for (int i = 0; i <n; i++)
    {
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}