//  C++ Program To Find Character Is Vowel Or Not Using If/Else Statements
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter the character:";
    cin>>a;
    if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='o' || a=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonent";
    }
}