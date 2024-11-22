#include "CommonHeader.h"

int main()
{
  system("cls");
  cout << "---- Pass By Reference to Friend Method ----" << endl;

  Stack st1(4);
  st1.push(1);
  st1.push(2);
  st1.push(3);
  st1.push(4);

  // View stack will not modify it, viewing values without popping
  viewStack(st1);
  st1.pop();
  st1.push(10);
  // View stack again.. successfully
  viewStack(st1);

  // Message to indicate if Program terminated as intended
  cout << "Program Terminated Successfully" << endl;

  return 0;
}

// Pass object by reference
void viewStack(Stack &stack)
{
  cout << "Viewing Stack: ";

  if (stack.isEmpty())
    cout << "But Stack Is Empty" << endl;

  else
  {
    int last = stack.top - 1;
    for (int i = last; i >= 0; i--)
    {
      cout << stack.stack_array[i] << " ";
    }
    cout << "\nDone Viewing Stack" << endl;
  }
}
