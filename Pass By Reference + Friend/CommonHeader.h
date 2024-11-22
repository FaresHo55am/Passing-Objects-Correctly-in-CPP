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
  // Push method to introduce new value
  void push(int val);
  // Pop method to retrieve top value
  int pop();
  // Getter method to access the size
  int getSize();
  // boolean returns true if empty stack
  bool isEmpty();

  // Moved as friend method in Stack Class
  friend void viewStack(Stack &);

  // Default Destructor
  ~Stack();
};