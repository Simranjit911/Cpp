// Program to check the primeness of the array
#include<iostream>
using namespace std;
int main()
{
  int a[100],i,n,k,j,flag;
  
 cout<<"Enter The Size of Array\n";
  cin>>n;

  cout<<"Enter The Element\n";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
 cout<<"\n\n";
  for(i=0;i<n;i++)
  { 
   flag=0;
   k=a[i]/2;
   for(j=2;j<=k;j++)
   {
    if(a[i]%j==0)
    {
    flag=1;
 break;    
 }
    
   }
   if(flag==1)
   cout<<a[i]<<" is Not Prime\n";
   else
   cout<<a[i]<<" is Prime\n";
  }
 return 0;

}