#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    int b=20;
    int *ptr2=&b;
    int **ptr3=&ptr2;
    cout<<**ptr3<<endl;



    cout<<&b <<" "<<*ptr2;
   
}