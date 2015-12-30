#include <stdio.h>
#include "list.h"

int main(void){
  List list;
  initialise_element(&list);

  push(&list,23);
  push(&list,45);
  push(&list,49);
  print_list(&list);
  printf("List length %d\n", list.length);
  return 0;
}
