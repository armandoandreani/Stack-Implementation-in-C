#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct {
  int top;
  int capacity;
  int *items;
} Stack;


Stack *create_stack();
void destroy_stack(Stack *stack);
void print_stack(Stack *stack);
bool isFull(Stack *stack);
bool isEmpty(Stack *stack);
Stack *push(Stack *stack, int item);
int pop(Stack *stack);
int peek(Stack *stack);

#endif
