#include <iostream>
#include <stack>
using namespace std;
void PrintStack(stack<int> s)
{
    // If stack is empty then return
    if (s.empty())
        return;
 
    int x = s.top(); 
    // Pop the top element of the stack
    s.pop(); 
    // Recursively call the function PrintStack
    PrintStack(s); 
    // Print the stack element starting
    // from the bottom
    cout << x << " "; 
    // Push the same element onto the stack
    // to preserve the order
    s.push(x);
}

int main()
{
   cout << "\n\n14.W.A.P to implement Push and Pop operations on a stack\n\n";
    stack<int> mystack;
     PrintStack(mystack);
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    cout << "Stack After Push operation:\n";
   PrintStack(mystack);
    // Stack becomes 1, 2, 3, 4
    mystack.pop();
    mystack.pop();
    cout << "\nStack After Pop operation:\n";
     PrintStack(mystack);
    // Stack becomes 1, 2   
    // while (!mystack.empty())
    // {
    //     cout << ' ' << mystack.top();
    //     mystack.pop();
    // }
    cout << "\n\nThis program is developed by:\nSimranjit Singh\nBCA-Semester-4\nRoll No.219922";
}