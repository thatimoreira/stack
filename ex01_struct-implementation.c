#include <stdio.c>
#include <stdlib.c>

#define MAX 10

int count;  // counts the number of elements in the stack

count = 0;

// Creating the stack
typedef struct stack    st
{
    int items[MAX];
    int top;
} stack;


// Creating an empty stack
void    createEmptyStack(st *s)
{
    s->top = -1;
}

// Checking if the stack is full
int isFull(st *s)
{
    if (s->top == MAX -1)
        return (1);
    else
        return (0);
}

// Chacking if the stack is empty
int isEmpty(st *s)
{
    if (s->top == -1)
        return (1);
    else
        return (0);
}

// Adding elements to the stack
void    push(st *s, int newElement)
{
    if (isFull(s))
        printf("Stack is FULL\n");
    else
    {
        s->top++;
        s->items[s->top] = newElement;
        count++;
    }

}
