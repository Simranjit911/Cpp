#include<iostream>
// Print 1 to n counting 
using namespace std;
int print(int n,int i){
    if(i>n) return {};
    cout<<i<<endl;
    print(n,i+1);

}
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    print(n,1);
}