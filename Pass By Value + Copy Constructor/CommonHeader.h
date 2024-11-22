#include <iostream>
using namespace std;

class Stack
{
  int *stack_array;
  int top;
  int size;

public:
  // Default Constructor
  Stack(int s);

  // Copy Constructor
  Stack(Stack &);

  // Push method to introduce new value
  void push(int val);
  // Pop method to retrieve top value
  int pop();
  // Getter method to access the size
  int getSize();
  // boolean returns true if empty stack
  bool isEmpty();

  // Default Destructor
  ~Stack();
};
// Moved as friend method in Stack Class
void viewStack(Stack);