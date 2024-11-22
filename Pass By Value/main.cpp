#include "CommonHeader.h"

int main()
{
  system("cls");
  cout << "---- Pass By Value ----" << endl;

  Stack st1(4);
  st1.push(1);
  st1.push(2);
  st1.push(3);
  st1.push(4);

  // View stack will not modify it.. or will it?
  viewStack(st1);
  st1.pop();
  st1.push(10);
  // View stack again.. Fail to lcoate its memory location
  viewStack(st1);

  // Message to indicate if Program terminated as intended
  cout << "Program Terminated Successfully";

  return 0;
}

// Pass object by value
void viewStack(Stack stack)
{
  cout << "Viewing Stack: ";

  if (stack.isEmpty())
    cout << "But Stack Is Empty" << endl;

  else
  {
    int last = stack.getSize() - 1;
    for (int i = last; i >= 0; i--)
    {
      cout << stack.pop() << " ";
    }
    cout << "\nDone Viewing Stack" << endl;
  }
}