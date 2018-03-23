//Marawan El Sharkawi
//CSCI 301-Section 1
//cs301175
//Project 7

/*
This program determines all the prime factors of a given integer using stack data structure and recursion technology.

The program uses five functions:
primeFactor(): The user input for the integer is passed to this function as a parameter,the function performs calculation through
recursion to determine the prime factors of the given integer and it pushes them into the stack.

push(): It adds items to the stack. Every call of the function pushes a new item over the past items in the stack.

pop(): It returns the first item on the top of the stack.

size(): Returns the number of items in the stack.

empty(): Checks if the stack is empty.

The program uses two data structures:

s1: stack object to store in it the prime factors of a given positive integer.

choice: integer variable which hold the user input of the positive integer the user wants to know its prime factors.

The program creates a stack object then creates an integer variable and asks the user to input the integer the user want to know
its prime factors,then it passes the value entered by the user as a parameter to the function which will perform the calculation
then prints out all the prime factors of the integer found by the function and stored in the stack. This process keep repeating
until the user ends the program.
*/

#include <iostream>
#include "Stack.h"
using namespace std;
Stack s1;

void primeFactor(int n){ /*Takes an integer variable as a parameter which is the user input for the integer,the function performs
calculation through recursion to determine the prime factors of the given integer and it pushes them into the stack.*/

//Post-Condition: The prime factors of the given integer has been determined and added to the stack through recursion.

if(n<=1){
    return;
}
int i=2;

while(n%i!= 0){
    i++;
}
s1.push(i);

primeFactor(n/i);
}

int main()
{

    int choice;
    while(choice!=0){
    cout<<"Enter a positive integer to know its prime factors (0 to stop): ";
    cin>>choice;

    if(choice==0){
        break;
    }else if(choice==1){
        cout<<"Prime factors: "<<choice<<" = "<<1<<endl;
    }else{
    primeFactor(choice);
    cout<<"Prime factors: "<<choice<<" = "<<s1<<endl;
    }

    }

    return 0;
}

