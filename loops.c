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

	printf("\n",all_odd_print(10,20));
	printf("\n",all_odd_print(10,15));

	printf("\n",all_even_print(10,20));
	printf("\n",all_even_print(10,15));

	printf("\n",every_Nth_num(4,3,15));
	printf("\n",every_Nth_num(4,3,25));

	printf("\n",print_all_odd_rev(25));
	printf("\n",print_all_odd_rev(10));

	printf("\n",print_all_even_rev(25));
	printf("\n",print_all_even_rev(10));

	printf("\n",multi_table(5,10));

	printf("sum_of_n of 5 is : %d\n",sum_of_n(5));
	printf("sum_of_n of 10 is : %d\n",sum_of_n(10));

	printf("product_of_n of 5 is : %d\n",product_of_n(5));
	printf("product_of_n of 10 is : %d\n",product_of_n(10));

	printf("sum_of_any_num of 4,8 is : %d\n",sum_of_any_num(4,8));
	printf("sum_of_any_num of 8,4 is : %d\n",sum_of_any_num(8,4));

	printf("product_of_any_num of 3,5 is : %d\n",product_of_any_num(3,5));
	printf("product_of_any_num of 4,8 is : %d\n",product_of_any_num(4,8));

	printf("sum_of_all_odd of 10,20 is : %d\n",sum_of_all_odd(10,20));
	printf("sum_of_all_odd of 10,15 is : %d\n",sum_of_all_odd(10,15));

	printf("sum_of_all_even of 10,20 is : %d\n",sum_of_all_even(10,20));
	printf("sum_of_all_even of 10,15 is : %d\n",sum_of_all_even(10,15));

}
