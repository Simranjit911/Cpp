#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node *next;

  node(int val){
    data=val;
    next=NULL;
  }
};
void insertattail(node* &head,int val){
  node *temp=head;
  // temp=head;
  if(head==NULL){
    head->data=val;
    return;
  }
  while(temp->next!=head){
    temp=temp->next;
  }
  temp->next=temp;
  temp->next=head;
}

void pri(node *head){
  node *t=head;
  while(t!=head){
    cout<<t->data<<"->";
  }
}

int main(){
  node* head=NULL;
  insertattail(head,5);
  pri(head);
}