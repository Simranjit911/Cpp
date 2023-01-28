#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3,4,6,7,1};
    int size = 5;
    int target = 7;
    int pair = 0;
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if (arr[i] + arr[j] == target){
                pair++;
            }
        }
    }
        cout << endl<< pair;
        return 0;
}
