#include <stdio.h>
#include <stdlib.h>

int main(){
  char card_name[3];
  int count = 0;
  while (card_name[0]!='X') {
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0]) {
      case 'K':
      case 'Q':
      case 'J':
        val = 10;
        break;
      case 'A':
        val = 11;
        break;
      case 'X':
        continue;
      default :
        val = atoi(card_name);
        if ((val<1)||(val>10)) {
          puts("I don't understand the value!");
          continue;
        }
    }
    if ((val > 2) && (val <7)) {
      count++;
      // puts("Count has gone up!");
    }
    else if(val == 10){
      count--;
      // puts("Cards has gone down");
    }
    printf("Current count : %i\n", count);
  }
  return 0;
}
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
// ---------------------------------------------------------

// int main() {
//   int x=0;
//   int y=0;
//   while (x<5) {
//     if(y<5){
//       x=x+1;
//       if(y<3)
//         x=x-1;
//     };
//     y=y+2;
//     printf("%i%i\n", x,y);
//     x=x+1;
//   }
//   return 0;
// }
