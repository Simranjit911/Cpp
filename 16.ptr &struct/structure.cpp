#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct stu{

  int roll;
  string clas;
  int sal;


  void print(){
    cout<<"Roll no:"<<roll<<endl;
    cout<<"Salary:"<<sal<<endl;
    cout<<"Class:"<<clas<<endl;
  }

};
int main(){
  // stu arr[]={0,1};
  stu sim;

  sim.roll=219922;
  sim.clas="Bca";
  sim.sal=100000;

  stu gur={229900,"bca",10000};


  sim.print();
  gur.print();
  cout<<endl;
}