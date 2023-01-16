#include <iostream>
using namespace std;
// Addition substraction of array

int main()
{
    int a[3], b[3], sum[3], mul[3];
    cout << "ENter the elemets in array a:";
    for (int i = 1; i <= 3; i++)
    {
        cin >> a[i];
    }
    cout << "ENter the elemets in array b:";
    for (int i = 1; i <= 3; i++)
    {
        cin >> b[i];
    }
    cout<<"Addition of array:";
    for(int i=1;i<=3;i++){
        sum[i]=a[i]+b[i];
        cout<<sum[i]<<" ";
    }
    cout<<"Multiplication of array:";
    for(int i=1;i<=3;i++){
        sum[i]=a[i]*b[i];
        cout<<sum[i]<<" ";
    }
}