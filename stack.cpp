//stack data structures
#include <iostream>
#include <stdlib.h>
using namespace std;
const int MAX = 10;
int size = 0;
//creating stack - while creating stack we have to maintain the top index so we use top variable
//using structure to create stack

struct stack
{
    int item[MAX]; //size of stack  is max=10;
    int top;
};

int main()
{
    stack *s = (stack *)malloc(sizeof(stack));
    /*
here two things are done:  one, dynamic memory of (size of stack=10*4) i.e 40 bytes is allocated in heap and secondly pointer s is allocated on the stack */

    createstack(s); //address pointed by pointer s is passed which is actually the starting address of stack)
    //after creating  stack ,we push elements into it ;
    push(s, 1); //when push function is called ,it will first check that the stack is not full
    push(s, 2);
    push(s, 5);
    push(s, 4);
    push(s, 8);
    pop(s);
    print(s, size);
    return 0;
}

void createstack(stack *s)
{
    s->top = -1; //top will point to the index of stack .  top = -1 means stack is empty
}
void push(stack *s, int n)
{
    if (isfull(s)) //before pushing ,it checks whether the stack is full or not
        cout << "stack full\n";
    else
    {
        s->top++;
        s->item[s->top] = n;
    }
    size++;
}
bool isfull(stack *s)
{
    if (s->top == (MAX - 1))
        return 1;
    else
        return 0;
}
void pop(stack *s)
{
    if (isempty(s))
        cout << "empty stack \n";
    else
    {
        s->top--;
    }
    size--;
}
bool isempty(stack *s)
{
    if (s->top == -1)
    {
        return 1;
        /* code */
    }
    else
        return 0;
}
void print(stack *s, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << s->item[i];
        /* code */
    }
}