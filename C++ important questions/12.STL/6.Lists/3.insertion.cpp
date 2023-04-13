#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

};
void insertfront(node* &head,int data){
    //dynamically create he memory fro the new node
    node* newnode=(node*)malloc(sizeof(node));

    // assign data value
    newnode->next= head;

    // reassign head to new node
    head=newnode;
}

void deletfront(node &head){
    
}
int main(){

}