// #include <stdio.h>
//
// void go_south_east(int *lat, int *lon) {
//   *lat = *lat - 1;
//   *lon = *lon + 1;
// }
// int main() {
//   int latitude = 32;
//   int longitude = -64;
//   go_south_east(&latitude, &longitude);
//   printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
//   return 0;
// };

// #include <stdio.h>
// int main() {
//   int contestants[] = {1, 2, 3};
//   int *choice = &contestants[1];
//   contestants[0] = 2;
//   contestants[1] = contestants[2];
//   contestants[2] = *choice;
//   printf("I'm going to pick contestant number %i\n", contestants[2]);
//   return 0;
// };

// #include <stdio.h>
// void fortune(char msg[]){
//   printf("Message reads : %s\n", msg);
//   printf("Message occupies %li bytes\n", sizeof(msg));
// };
//
// int main(){
//   char quote[] = "Cookies make you fat";
//   fortune(quote);
//   return 0;
// };

// #include <stdio.h>
// int main(){
//   int drinks[] = {4,2,3};
//   printf("1st order: %i drinks\n", drinks[0]);
//   printf("1st order: %i drinks\n", *drinks);
//   printf("3rd order: %i drinks\n", drinks[2]);
//   printf("3rd order: %i drinks\n", *(drinks+2));
// }

// #include <stdio.h>
// void skip(char *msg){
//   puts(msg+6);
// }
// int main(){
//   char *msg_from_away = "Don't call me";
//   skip(msg_from_away);
// }

// #include <stdio.h>
// int main(){
//   char first_name[20];
//   char last_name[20];
//   printf("Enter thr first and last name : " );
//   scanf("%19s %19s",first_name,last_name );
//   printf("first: %s last: %s\n", first_name,last_name);
// }

// #include <stdio.h>
// int main(){
//   char food[5];
//   printf("Enter the fav food: ");
//   fgets(food,sizeof(food),stdin);
// }

// #include <stdio.h>
// int main(){
//   char cards[] = "JQK";
//   char a_card = cards[2];
//   cards[2] = cards[1];
//   cards[1] = cards[0];
//   cards[0] = cards[2];
//   cards[2] = cards[1];
//   cards[1] = a_card;
//   puts(cards);
//   return 0;
// }

#include <stdio.h>
int main(){
  char masked_raider[] = "Alive";
  char *jimmy = masked_raider;
  printf("Marked raider is %s,Jimmy is %s\n", masked_raider,jimmy);
  masked_raider[0]='D';
  masked_raider[1]='E';
  masked_raider[2]='A';
  masked_raider[3]='D';
  masked_raider[4]='!';
  printf("Marked raider is %s,Jimmy is %s\n", masked_raider,jimmy);
  return 0;
}
