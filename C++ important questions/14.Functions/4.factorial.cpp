#include<iostream>
using namespace std;
int fact(int n){
    int facto=1;
    for(int i=1;i<=n;i++){
        facto=facto*i;

    }
    return facto;
}
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    cout<<fact(n);

}