// C++ Program To Check Number Is Prime Or Not Using If/Else Statements
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "ENter the number:";
    cin >> num;
    bool res = 0;
    for (int i = 2; i <num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not a Prime number";
            res = 1;
            break;
        }
    }
    if (res == 0)
    {
        cout << "Prime number";
    }
}
