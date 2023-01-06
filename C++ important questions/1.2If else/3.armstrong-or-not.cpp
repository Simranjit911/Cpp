#include<iostream>
// C++ Program To Check Number Is Armstrong Or Not Using If/Else Statements
using namespace std;
int main(){
    int n1,n2,rem,num=0;
    cout<<"Enter the number:";
    cin>>n1;
    n2=n1;
    while(n1!=0){
        rem=n1%10;
        num=num+rem*rem*rem;
        n1=n1/10;


    }
    if(num==n2){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not an armstrong";
    }
}