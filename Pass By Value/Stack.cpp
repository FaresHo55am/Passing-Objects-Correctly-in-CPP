#include "CommonHeader.h"

Stack::Stack(int s)
{
  size = s;
  top = 0;
  stack_array = new int[s];
  cout << "Stack Object Created" << endl;
}

// Push method to add an element to the stack
void Stack::push(int val)
{
  if (top < size) // Check if there's space in the stack
  {
    stack_array[top++] = val;
  }
  else
  {
    // Stack Overflow: Unable to push
  }
}

// Pop method to remove an element from the stack
int Stack::pop()
{
  if (top >= 0) // Ensure the stack is not empty
  {
    return stack_array[--top];
  }
  else
  {
    // Stack Underflow: Stack is empty!
    return -1; // Return -1 to indicate error
  }
}

// Method to get the current size of the stack
int Stack::getSize()
{
  return top; // Returns the number of elements in the stack
}

bool Stack::isEmpty()
{
  return top == 0;
}

// Destructor to clean up dynamically allocated memory
Stack::~Stack()
{
  cout << "Stack Object Deleted" << endl;
  delete[] stack_array; // Correct way to delete a dynamically allocated array
}