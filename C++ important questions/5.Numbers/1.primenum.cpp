#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter:";
    cin >> n;
    bool flag = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            cout << "Not a Prime Number";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Prime number:";
    }
}