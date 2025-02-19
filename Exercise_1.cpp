// Time Complexity : O(1)
// Space Complexity : O(1000) or O(MAX) depending on size of MAX 
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this : No
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack {
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { //Constructor here
      top = -1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    //Your code here
    //Check Stack overflow as well
    if(top == MAX - 1)
    {
      cout << "Overflow condition hit";
      return false;
    }
    // Add the data to the Stack
    else
    {
      top++;
      a[top] = x;
      return true;
    }
}

int Stack::pop()
{
    //Your code here
    int item;
    //Check Stack Underflow as well
    if (top == -1)
    {
      cout << "Underflow condition hit";
      return -1;
    }
    //Pop data from the Stack
    else
    {
      item = a[top];
      top--;
      return item;
    }
}
int Stack::peek()
{
    //Your code here
    //Check empty condition too
    if(top == -1)
    {
      cout << "Stack is is empty";
      return -1;
    }
    //Return the top most element
    else
    {
      return a[top];
    }
}

bool Stack::isEmpty()
{
    //Your code here
    return (top < 0);
}

// Driver program to test above functions
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";

    return 0;
}

