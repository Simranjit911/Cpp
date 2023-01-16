#include<iostream>
using namespace std;
int main(){
       int n;
       cout<<"ENter :";
       cin>>n;
       int m=n;
       int res=0;
       for(int i=n;i>0;i=i/10){
              res=res*10+i%10;

       }
       cout<<res;
       if(res==m){
              cout<<"This is a palindrome number";

       }
       else{
              cout<<"This is not palindrome number";
       }

}
