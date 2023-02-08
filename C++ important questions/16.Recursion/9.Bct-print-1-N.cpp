#include<iostream>
using namespace std;
int print(int n){
    if(n==0){
        return {};
    }
    print(n-1);
    cout<<n<<endl;
    
}

int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    print(n);

}