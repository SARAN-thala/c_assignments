#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void initialise_element(List *list) {
  list->first = list->last = NULL;
  list->length = 0;
};

void push(List *list,int value) {
  Element *e = (Element *)malloc(sizeof(Element));
  e->value = value;
  e->next  = NULL;
  if (list->length == 0)
    list->first=list->last=e;
  else{
    list->last->next=e;
    list->last=e;
  }
  // printf("%d\n", *e);
  list->length++;
};

void print_list(List *list) {
  Element *ele = list->first;
  // printf("Element = %d\n", *ele );
  while (ele != NULL) {
    printf("Value of stack = %d\n", ele->value);
    ele = ele->next;
  };
};
