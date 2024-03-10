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

// Checking if the stack is empty
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

// Removing elements of the stack
void    pop(st *s)
{
    if (isEmpty(s))
        printf("Stack is EMPTY\n");
    else
    {
        printf("Popped %d\n", s->items[s->top]);
        s->top--;
        count--;
    }
}

// Printing stack elements
void printStack(st *s)
{
    int i;

    i = 0;
    printf("Stack: "):
    while (i < count)
        printf("%d ", s->items[i++]);
    printf("\n");
}

int main(void)
{
    st *s;
    
    s = (st *)malloc(sizeof(st));
    if (s == NULL)
        return (NULL);
    createEmptyStack(s);

    push(s, 1);
    push(s, 11);
    push(s, 3);
    push(s, 21);
    push(s, 14);
    printStack(s);
    return (0);
}