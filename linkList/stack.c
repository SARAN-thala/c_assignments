#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void initialize_stack(Stack *stack) {
  stack->top = NULL;
  stack->length = 0;
};

void push(Stack *stack,int value) {
  Element *e = (Element *)malloc(sizeof(Element));
  e->value = value;
  e->next  = NULL;
  if (stack->top == NULL)
    stack->top=e;
  else{
    e->next = stack->top;
    stack->top = e;
  }
  stack->length++;
};

int pop(Stack *stack){
  Element *e = stack->top;
  int value = e->value;
  stack->top=e->next;
  stack->length--;
  return value;
}

void print_stack(Stack *stack) {
  Element *ele = stack->top;
  while (ele != NULL) {
    printf("push = %d\n", ele->value);
    ele = ele->next;
  };
};
