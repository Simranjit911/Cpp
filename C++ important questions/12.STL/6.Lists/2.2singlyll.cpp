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
//***********************************************insert at beginning************************************************
void insertatbeg(node* &head,int data){
    node *n=new node(data);
    // n->data=data; O(1);
    n->next=head;
    head=n;
}
//***********************************************insert at pos******************************************************
void addatpos(node* &head,int data,int pos){
    node *temp=head;
    node *temp2=new node(data);
    // temp2->data=data;
    if(pos==1){
        temp2->next=head;
        head=temp2;
        return;
     }
    // // temp2->next=NULL;
    // // temp--;
    pos--;    
    while(pos != 1){
        temp=temp->next;
        pos--;
    }
    temp2->next=temp->next;
    temp->next=temp2;
}

//**************************************************insert at end*************************************************
void insertatend(node* &head,int data){
    node *n=new node(data);
    if(head==NULL){
        head=n;
        return ;
        }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
//******************************************************** search***************************************************
bool srch(node *head,int key){
    node *t=head;
    while(t!=NULL){
        if(t->data==key){
            return true;
        }
        t=t->next;
    }
    return false;
}

// *******************************************deletion front*******************************************************
void deletefr(node* &head){
//     return head->next;
head=head->next;
}
// *******************************************deletion end*******************************************************
void delend(node* &head){
    node *t=head;
    while(t->next->next!=NULL){
        t=t->next;
    }
    t->next=NULL;
    // free(t->next->next);
}
// ****************************************deletion at pos******************************************************
void delatpos(node* &head,int val){
    if(head->data==val){
        head=head->next;
    }
    node *temp=head;
    node *prev;
    while(temp->data!=val){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
}

//***********************************************display************************************************************
void pri(node *node){
    while(node!=NULL)
    {
        cout<<node->data<<"->";
        node=node->next;
    }
    cout<<"NULL";
}
int main(){
    node *head=NULL;

    insertatbeg(head,2);   
    insertatbeg(head,1);   
    pri(head);cout<<endl;

    insertatend(head,3);
    insertatend(head,9);
    pri(head);cout<<endl;       
   
   cout<<"Insert at pos 1\n";
    addatpos(head,5,5);    
    addatpos(head,10,1);    
    pri(head);cout<<endl;

    // cout<<endl<<srch(head,40);
    // cout<<endl<<srch(head,1);

    cout<<"\ndeleting head:\n";
    deletefr(head);
    pri(head);cout<<endl;
    // deletefr(head);
    cout<<"\ndeleting tail:\n";
    delend(head);
    pri(head);cout<<endl;
    
    cout<<"\ndeleting at pos:\n";
    delatpos(head,9);
    pri(head);cout<<endl;

}