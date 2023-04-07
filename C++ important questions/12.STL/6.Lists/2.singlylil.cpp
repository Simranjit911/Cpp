#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    class node{
        public:
        int data;
        node* next;
        // constrcutor
        node(int data){ 
            this ->data=data;
            this ->next=NULL;
        }

    };
    // traversing a ll
    void printl(node* &head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

int main(){
    node* head=new node(1);
    node* second=new node(2);
    node* third=new node(3);

    // head->data=1;
    // head->next=second;

    // second->data=2;
    // second->next=third;

    // third->data=3;
    // third->next=NULL;
    head->next=second;
    second->next=third;


    printl(head);


}