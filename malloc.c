// #include <stdio.h>
// #include <stdlib.h>
//
// int main(void){
//   char a = 'a';
//   int *ptr = (int *)malloc (sizeof(int));
// // *ptr address is pointing to the heao address
//   printf("%ld\n", sizeof(*ptr));
//   printf("%ld\n", sizeof(ptr));
//   printf("%p\n", ptr);
//   printf("%p\n", ptr+1);
//   printf("%d\n", *ptr);
// };
// --------------------------------------------

#include <stdio.h>

struct a1{
  long int * c;
  char * a;
  char s;
  int * r;
  // char g;
  // char y;
  // int h;
  char o;
};

int main(void){
  printf("%ld\n", sizeof(struct a1));
}
