#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    bool flag = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout<<i<<"This is not prime\n";
            flag = 1;
            break;
        }
    }
        if (flag == 0)
        {
            cout  << "This is Prime number\n";
        }
    
}