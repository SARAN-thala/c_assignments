#include <stdio.h>
#include <assert.h>
#include <string.h>

int str(){
  printf("%d\n",strcmp("Hello","Hello"));
  assert(strcmp("Hello","Hello")==0);
}
int num(){
  assert(6==6);
}

int main(int argc, char const *argv[]) {
  str();
  num();
  return 0;
}
