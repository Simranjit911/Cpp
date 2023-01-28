#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 1,2, 4,0, 6};
    int size = 6;
    int target = 5;
    int pair = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    pair++;
                }
            }
        }
    }
cout << endl
     << pair;
return 0;

}
