#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void initialize_list(List *list) {
  list->first = NULL;
  list->length = 0;
};

void enqueue(List *list,int value) {
  Element *e = (Element *)malloc(sizeof(Element));
  e->value = value;
  e->next  = NULL;
  if (list->length == 0)
    list->first=list->last=e;
  else{
    list->last->next=e;
    list->last=e;
  }
  list->length++;
  // free(e);
};

int dequeue(List *list){
  if(list->length==0){
    return 0;
  }
  Element *e = list->first;
  int value = e->value;
  list->first = e->next;
  list->length--;

  return value;
}

void print_list(List *list) {
  Element *ele = list->first;
  while (ele != NULL) {
    printf("enqueue = %d\n", ele->value);
    ele = ele->next;
  };
};
