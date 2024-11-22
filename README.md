# Passing-Objects-Correctly-in-CPP
This small project illustrates what happens when editing an passed object in a method 
Case used for this is Stack Class. If you wish to view every element of a basic Stack with pop() and push(),
you need to use pop(). But this alters the contents of the stack, let's explore how this occurs

There are 4 ways to pass an object to a method:
1) **Direct Pass by Value**: After editing object, there may be some rubbish values if you attempt to access it. 
sometimes accessing it won't work as it can be destroyed after terminating the method

2) **Pass By Reference**: Similar to Pass by Value, it will be edited. But it can still be accessed safely and won't be destroyed.

3) **Pass By Reference + Method function** is a friend:
Friend method to stack class can be used to access stack elements without popping, so no editing occurs!
but it's recommended to minimize friend methods unless it's absolutely necessary

4) **Using Copy Constructor + Pass By Value**:
When you simply copy an object to another temporary object which can be edited seperately without
altering the original object, _why not use it?!_
