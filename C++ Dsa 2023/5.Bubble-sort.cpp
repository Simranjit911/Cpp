#include<iostream>
using namespace std;
int main ()
{  
     cout<<"\n\n5.W.A.P to sort elements using bubble sort\n";
   int i, j,temp;
   int n;
    cout<<"Enter Size:\n";
    cin>>n;
    cout<<"Enter array :\n";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   cout <<"Inputed array ...\n";
   for(i = 0; i<n; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<n; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }

}
cout <<"Sorted Elements ...\n";
for(i = 0; i<n; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\n\nThis program is developed by:\nSimranjit Singh\nBCA-Semester-4\nRoll No.219922";
return 0;
}