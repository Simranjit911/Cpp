#include<iostream>
#include<cstdlib>
#include<ctime>
  
using namespace std;
int main(){
    int length=0;
    cin>>length;
    string pass;
    string symbol="!@#$%^&*+";
    string num="123456789";
    string lower="abcdefghijklmnopqrstuvwxyz";
    string upper="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    srand(time(0));
    string data=symbol+lower+num+upper;
    for(int i=0;i<length;i++){
        pass=pass+data[rand()%55];
    }
    cout<<pass;
}
