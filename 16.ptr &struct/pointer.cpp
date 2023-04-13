#include<iostream>
using namespace std;
int main(){
    system("cls");
    int x=5;
    int *h=&x;
    cout<<h<<endl;
    cout<<*h<<endl;
    char a='l';
    char *c=&a;
    char **d=&c;
    cout<<*c<<endl;
    cout<<*d<<endl;

}