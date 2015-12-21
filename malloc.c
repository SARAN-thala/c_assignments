#include <stdio.h>
#include <stdlib.h>

int main(void){
  char a = 'a';
  int *ptr = (int *)malloc (sizeof(int));

// *ptr address is pointing to the heao address.
  printf("%ld\n", sizeof(*ptr));
  printf("%ld\n", sizeof(ptr));
  printf("%p\n", ptr);
  printf("%p\n", ptr+1);
  printf("%d\n", *ptr);
}
