// C++ Program For Count Positive And Negative Number in An Array
#include <iostream>
using namespace std;
int main()
{
    int n, pos = 0, neg = 0;
    cout << "Enter:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg++;
        }
        else if(arr[i] > 0)
        {
                pos++;
        }
    }

    cout << "neg :" << neg << endl;
    cout << "pos :" << pos << endl;
}