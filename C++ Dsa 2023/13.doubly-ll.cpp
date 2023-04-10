#include <iostream>
using namespace std;
// Doubly linked list node
class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int data)
  {
    this->data = data;
    prev = NULL;
    next = NULL;
  }
};

// Doubly linked list class
class DoublyLinkedList
{
private:
  Node *head;

public:
  DoublyLinkedList()
  {
    head = NULL;
  }

  // Function to insert a node at the beginning of the doubly linked list
  void insertAtBeginning(int data)
  {
    // Create a new node
    Node *newNode = new Node(data);

    // Set the next pointer of the new node to the current head
    newNode->next = head;

    // If the head is not NULL, set the previous pointer of the current head to the new node
    if (head != NULL)
    {
      head->prev = newNode;
    }

    // Set the head to the new node
    head = newNode;
  }

  // Function to insert a node at the end of the doubly linked list
  void insertAtEnd(int data)
  {
    // Create a new node
    Node *newNode = new Node(data);

    // If the head is NULL, set the new node as the head
    if (head == NULL)
    {
      head = newNode;
      return;
    }

    // Traverse the list to find the last node
    Node *last = head;
    while (last->next != NULL)
    {
      last = last->next;
    }

    // Set the next pointer of the last node to the new node
    last->next = newNode;

    // Set the previous pointer of the new node to the last node
    newNode->prev = last;
  }

  // Function to delete a node from the doubly linked list
  void remove(int val)
  {
    Node *temp = head;
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
      Node *curr = head;
      while (temp != nullptr && temp->data != val)
      {
        // When node is found, delete the node and modify the pointers
        curr = temp;
        temp = temp->next;
      }
      // If values is not found in the linked list
      if (!temp)
      {
        cout << "Value not found";
        return;
      }

      curr->next = temp->next;
      delete temp;
    }
  }

  // Function to search for a node with a given key in the doubly linked list
  int search(int val)
  {
    Node *temp = head;
    while (temp != nullptr)
    {
      if (temp->data == val)
        return true;
        // cout<<"Value found";
      temp = temp->next;
    }
    return false;
    // cout<<"Value not found";

  }

  // Function to print the doubly linked list
  void printList()
  {
    // Traverse the list and print each node
    Node *current = head;
    while (current != NULL)
    {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }

  // Function to insert a node at a specific position in the doubly linked list
  void insertAtPosition(int data, int position)
  {
    // Create a new node
    Node *newNode = new Node(data);

    // If the position is 1, insert the node at the beginning of the list
    if (position == 1)
    {
      newNode->next = head;
      if (head != NULL)
      {
        head->prev = newNode;
      }
      head = newNode;
      return;
    }

    // Traverse the list to find the node at the position before the insertion point
    Node *current = head;
    int currentPosition = 1;
    while (current != NULL && currentPosition < position - 1)
    {
      current = current->next;
      currentPosition++;
    }

    // If the position is greater than the number of nodes in the list, insert the node at the end of the list
    if (current == NULL)
    {
      Node *last = head;
      while (last->next != NULL)
      {
        last = last->next;
      }
      last->next = newNode;
      newNode->prev = last;
      return;
    }

    // Insert the node at the specified position
    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != NULL)
    {
      current->next->prev = newNode;
    }
    current->next = newNode;
  }
};

int main()
{
  // Create an empty doubly linked list
  DoublyLinkedList dll;

  // Insert some nodes at the beginning of the list
  cout << "\n13.W.A.P to implement insertion,deletion and searching operation in doubly linked list\n";
  cout << "Inserting 5 At Beginning :";
  dll.insertAtBeginning(5);
  dll.printList();

  cout << "Inserting 10 At End :";
  dll.insertAtEnd(10);
  dll.printList();

  cout << "Inserting 60 At Position 2nd :";
  dll.insertAtPosition(60, 2);
  dll.printList();

  // Insert some nodes at the end of the list
  cout << "\nNow the List is:";
  dll.printList();

  cout << "\nSearching for 8:";
  cout<<dll.search(8);

  cout << "\nSearching for 60:";
   cout<<dll.search(60);

  cout << "\n\nDeleting 5";
  dll.remove(5);

  cout << "\n\nNow the List is:";
  dll.printList();

  cout << "\n\nThis program is developed by:\nSimranjit Singh\nBCA-Semester-4\nRoll No.219922";
}
