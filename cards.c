#include <stdio.h>
#include <stdlib.h>

int main(){
  char card_name[3];
  puts("Enter the card_name: ");
  scanf("%2s", card_name);
  int val = 0;
  // if(card_name[0]=='K'){
  //   val = 10;
  // }
  // else if (card_name[0]=='Q') {
  //   val = 10;
  // }
  // else if (card_name[0]=='J') {
  //   val = 10;
  // }
  // else if (card_name[0]=='A') {
  //   val = 11;
  // }
  // else{
  //   val = atoi(card_name);
  // }
  switch (card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    default :
      val = atoi(card_name);
  }
  if ((val > 2) && (val <7)) {
    puts("Count has gone up!");
  }
  else if(val == 10){
    puts("Cards has gone down");
  }
  return 0;
}
// -------------------------------------------------------
// #include <stdio.h>
//
// int main(){
//   int card = 1;
//   if(card > 1){
//     card = card-1;
//     if(card<7)
//       puts("Small card");
//   else
//     puts("Ace!");
//   return 0;
// }
