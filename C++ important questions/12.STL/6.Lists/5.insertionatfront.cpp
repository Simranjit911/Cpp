#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void printl(node *node)
{
    //   node* temp=head;
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

// 1.fIRST WAY
//    node *pushf(node *head,int ndata){
//      node *newnode=new node();
//      newnode->data=ndata;
//      newnode->next=head;
//      head=newnode;
//      return head;
//    }

// 2ND wAY
// void pushf(node **headref,int data){
//     node *newnode=new node();
//     newnode->data=data;
//     newnode->next=*headref;
//     *headref=newnode;
// }

// 3RD Way
void pushf(node **head, int ndata)
{
    node *newnode=new node(ndata);
      // assign value to node
    // newnode->data = ndata;
    newnode->next = *head;
    // reassign head
    *head = newnode;
}

int main()
{
    node *head = new node(1);
    node *scnd = new node(2);
    node *thrd = new node(3);


    head->next = scnd;

 
    scnd->next = thrd;

    thrd->next = NULL;
    // node *head=NULL;
    pushf(&head, 5);
    pushf(&head, 10);
    pushf(&head, 100);
    //    head= pushf(head,5);
    //     head=pushf(head,10);

    printl(head);
}