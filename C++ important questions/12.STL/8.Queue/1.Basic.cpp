#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void p(queue<int> q){
    for(int i=1;i<=q.size();i++){
        cout<<i<<" ";
    }
}

int main(){
/*Queue=FIFO (First in First Out)Jo phle jaega vio phle baheer aega*/
    queue<int> q;
    q.push(1);//{1}
    q.push(4);//{1,4}
    q.push(3);//{1,4,3}
    q.back() +=5; //adds 5 in 3
    cout<<endl;
    cout<<q.back();
    p(q);

    
}