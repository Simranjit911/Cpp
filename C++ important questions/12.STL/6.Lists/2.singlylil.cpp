#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    // constructor
    node(int d){
    data=d;
    next=NULL;
    }

};
void dis(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node *inserbeg(node *head,int ndata){
    // int ndata;
    // cout<<"Enter:";
    // cin>>ndata;
   node *newnode=new node(ndata);
    // node *newnode = (node *)malloc(sizeof(node));
   newnode->data=ndata;
   newnode->next=head;
   head=newnode;
   return newnode;
}
void insafternode(node *head,int ndata,int newval){
    node *newnode=new node(newval);
    // node *newnode=(node *) malloc(sizeof(node));
    node *temp=head;
    while(temp->data!=ndata){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;    
}

void inseratend(node*head,int newval){
    node *newnode=new node(newval);
    node *temp=head;
    while(temp->next!= NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
// ************************************deletion**********************************************
node *deletebeg(node *head){
    return head->next;
}
node *delgivennode(node* head,int val){
    if(head->data==val){
        return head->next;
    }
    node *temp=head,*prev=NULL;
    while(temp->data!=val){
        prev=temp;
        temp=temp->next;
    }
    prev->next =temp->next;
    return head;
}
void delend(node *head){
    node *temp =head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}

int main(){
node* head=new node(10);
node* scnd=new node(20);
node* thrd=new node(30);
node* four=new node(40);
node* five=new node(50);

head->next=scnd;
scnd->next=thrd;
thrd->next=four;
four->next=five;
five->next=NULL;
// node *head=NULL;
head=inserbeg(head,25);
head=inserbeg(head,89);
dis(head);
cout<<"\nAfter 20:48\n";
insafternode(head,20,48);
dis(head);
cout<<"\nAfter 40:84\n";
insafternode(head,40,84);
dis(head);
cout<<"\nAfter 100\n";
inseratend(head,100);
dis(head);
cout<<"\nAfter deleting 89:\n";
head=deletebeg(head);
dis(head);
cout<<"\nAfter deleting 100:\n";
delend(head);
dis(head);
delend(head);cout<<endl;
head=delgivennode(head,30);
dis(head);
}