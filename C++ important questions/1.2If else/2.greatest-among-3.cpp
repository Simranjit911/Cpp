#include<iostream>
// C++ Program To Find Greatest Among Three Numbers
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three number:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<a<<"Is greater ";
    }
    else if(b>a && b>c)
    {
        cout<<b<<"is greater";
    }
    else{
        cout<<c<<"Is greater";
    }
    
}
