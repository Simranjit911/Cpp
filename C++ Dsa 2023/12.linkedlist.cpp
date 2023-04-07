#include <iostream>
using namespace std;

// Making a node struct containing an int data and a pointer
// to next node
struct Node { 
  int data; 
  Node *next;

  // Parameterised constructor with default argument
  Node(int val=0) :data(val),next(nullptr){}
  // Parameterise constructor
  Node(int val, Node *tempNext):data(val),next(tempNext){}
};

class LinkedList
{
    // Head pointer
    Node* head;

  public:
    // default constructor. Initializing head pointer
    LinkedList():head(nullptr)
    {
    }

    // inserting elements (At start of the list)
    void insert(int val)
    {
      // make a new node
      Node* new_node = new Node(val);

      // If list is empty, make the new node, the head
      if (head == nullptr)
      {
        head = new_node;
      }
      // else, make the new_node the head and its next, the previous
      // head
      else
      {
        new_node->next = head;
        head = new_node;
      }
    }

    // loop over the list. return true if element found
    bool search(int val)
    {
      Node* temp = head;
      while(temp != nullptr)
      {
        if (temp->data == val)
          return true;
        temp = temp->next;
      }
      return false;
    }

    
    void remove(int val)
    {
      Node* temp = head;
      // If the head is to be deleted
      if (temp != nullptr && temp->data == val)
      {
        head = temp->next;
        delete temp;
        return;
      }
      // Else loop over the list and search for the node to delete
      else
      {
        Node* curr = head;
        while(temp != nullptr && temp->data != val)
        {
        // When node is found, delete the node and modify the pointers
         curr = temp;
         temp = temp->next;  
        }
        // If values is not found in the linked list
        if(!temp)
        {
           cout << "Value not found";
           return;
        }

        curr->next = temp->next;
        delete temp;
      }  
    }

    void display()
    {
      Node* temp = head;
      while(temp != nullptr)
      {
        cout << temp->data << " ";
        temp = temp->next;
      }
      cout << endl;
    }
};

int main() {
  cout << "\n\n12.W.A.P to implement insertion,deletion,searching operations in one way linked list\n\n";
  LinkedList l;
  // inserting elements
  l.insert(12);
  cout<<"Inseting 12:\t";l.display();
  l.insert(18);
  cout<<"Inseting 18:\t";l.display();
  l.insert(1);
  cout<<"Inseting 1:\t";l.display();
  l.insert(6);
  cout<<"Inseting 6:\t";l.display();
  l.insert(7);
  cout<<"Inseting 7:\t";l.display();
  cout << "\nCurrent Linked List: ";
  l.display();

  cout << "\nDeleting 1: ";
  l.remove(1);
  cout<<"\nAfter deleting 1:\t"; l.display();
 

  cout << "\nDeleting 13: ";
  l.remove(13);
  cout<<"\nAfter deleting 13:\t"; l.display();

//   l.display();

  cout << "\nSearching for 18: ";
  cout << l.search(7) << endl;

  cout << "\nSearching for 24: ";
  cout << l.search(24) << endl;
    cout << "\n\nThis program is developed by:\nSimranjit Singh\nBCA-Semester-4\nRoll No.219922";

}