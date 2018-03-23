#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<iostream>
using namespace std;

class Stack{

public:
    static const int capacity=100;
    typedef int Item;

    Stack(){used=0;} //Constructor.

    void push(Item entry); /*It adds items to the stack. Every call of the function pushes a new item over the past items in the
    stack.*/
    /*post-condition: Item passed as a parameter has been added to the stack, if there are items in the stack already the item
    would be added at the top of any past items in the stack.*/

    Item pop(); //It returns the first item on the top of the stack.
    //post-condition: The top item of the stack has been returned.

    int size(){return used;} //Returns the number of items in the stack.
    //post-condition: The number of items in the stack has been returned.

    bool empty(){return used==0;} //Checks if the stack is empty.
    //post-condition: A bool value has been returned indicating if the stack is empty.

    friend ostream &operator << (ostream &out_put,Stack &s);

private:
    Item data[capacity];
    int used;


};

#include"Stack.cpp"
#endif // STACK_H_INCLUDED
