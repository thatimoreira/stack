#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// Creating the stack
typedef struct stack
{
    int         items[MAX];
    int         top;
} stack;

static int  count; // counts the number of elements in the stack

// Creating an empty stack
void    createEmptyStack(stack *s)
{
    s->top = -1;
}

// Checking if the stack is full
int isFull(stack *s)
{
    if (s->top == MAX -1)
        return (1);
    else
        return (0);
}

// Checking if the stack is empty
int isEmpty(stack *s)
{
    if (s->top == -1)
        return (1);
    else
        return (0);
}

// Adding elements to the stack
void    push(stack *s, int newElement)
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
void    pop(stack *s)
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
void printStack(stack *s)
{
    int i;

    i = 0;
    printf("Stack: ");
    while (i < count)
        printf("%d ", s->items[i++]);
    printf("\n");
}

int main(void)
{
    stack *s;
    
    s = (stack *)malloc(sizeof(stack));
    if (s == NULL)
        return (-1);
    createEmptyStack(s);

    push(s, 1);
    push(s, 11);
    push(s, 3);
    push(s, 21);
    push(s, 14);
    printStack(s);
    return (0);
}