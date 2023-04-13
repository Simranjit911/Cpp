#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
void printl(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int insertaf(node *anynode, int ndata)
{
    node *newnode = new node();
    newnode->data = ndata;
    newnode->next = anynode->next;
    anynode->next = newnode;
    // return head;
}
int main()
{
    system("cls");
    node *head =new node();
    node *scnd=new node();


    head->data=5;
    head->next=scnd;
    scnd->data=10;
    scnd->next=NULL;
    printl(head);
    insertaf(scnd, 79);
    printl(head);
}