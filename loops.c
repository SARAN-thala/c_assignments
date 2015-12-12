#include <stdio.h>
#include "loopsUtil.h"

int main(){
	printf("factorial of 7 is :%d\n",factorial(7));
	printf("factorial of 4 is :%d\n",factorial(4));
	printf("factorial of 15 is :%d\n",factorial(15));

	printf("\n",fibonacci(5));
	printf("\n",fibonacci(8));

	printf("\n",print_all_odd(5));
	printf("\n",print_all_odd(15));
	printf("\n",print_all_odd(20));

	printf("\n",print_all_even(5));
	printf("\n",print_all_even(15));
	printf("\n",print_all_even(20));

	printf("\n",multi_table(5,10));

}