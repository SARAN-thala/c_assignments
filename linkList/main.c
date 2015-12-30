#include <stdio.h>
#include "list.h"

int main(void){
  List list;
  initialize_list(&list);

  enqueue(&list,23);
  enqueue(&list,45);
  enqueue(&list,49);
  enqueue(&list,89);
  enqueue(&list,10);
  print_list(&list);

  printf("dequeue : %d\n", dequeue(&list));
  printf("dequeue : %d\n", dequeue(&list));
  printf("dequeue : %d\n", dequeue(&list));
  printf("dequeue : %d\n", dequeue(&list));
  printf("dequeue : %d\n", dequeue(&list));

  print_list(&list);
  printf("List length %d\n", list.length);
  return 0;
}
