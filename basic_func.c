#include <stdio.h>
#include "basic_func_util.h"

int main(void){
	printf("is_even_or_is_odd tells that 0 = even, 1 = odd  2 is : %d\n",is_even_or_is_odd(2));
	printf("is_even_or_is_odd tells that 0 = even, 1 = odd  3 is : %d\n",is_even_or_is_odd(3));
	printf("is_even_or_is_odd tells that 0 = even, 1 = odd -27 is : %d\n",is_even_or_is_odd(-27));
	printf("is_even_or_is_odd tells that 0 = even, 1 = odd -22 is : %d\n",is_even_or_is_odd(-22));

	printf("square of given 2 is : %d\n",square(2));
	printf("square of given 24 is : %d\n",square(24));
	printf("square of given 12 is : %d\n",square(12));
	printf("square of given 89 is : %d\n",square(89));

	printf("cube of given 2 is : %d\n",cube(2));
	printf("cube of given 24 is : %d\n",cube(24));
	printf("cube of given 12 is : %d\n",cube(12));
	printf("cube of given 89 is : %d\n",cube(89));

	printf("Average of three number 2, 3 and 4 is: %.2f\n",average_of_three_num(2,3,4));
	printf("Average of three number 2, -3 and -4 is: %.2f\n",average_of_three_num(2,-3,-4));
	printf("Average of three number 2.2, 3.4 and 4.5 is: %.2f\n",average_of_three_num(2.2,3.4,4.5));

	printf("Average of three number in percentage 2, 3 and 4 is: %.2f percentage \n",
			average_of_three_num_in_percentage(2,3,4,100));
	printf("Average of three number in percentage 2, -3 and -4 is: %.2f percentage \n",
			average_of_three_num_in_percentage(2,-3,-4,100));
	printf("Average of three number in percentage 2.2, 3.4 and 4.5 is: %.2f percentage \n",
			average_of_three_num_in_percentage(2.2,3.4,4.5,100));

	printf("Largest of 2, 3, 4 is : %.2f\n",largest_of_three_num(2,3,4));
	printf("Largest of -78, -3, -27 is : %.2f\n",largest_of_three_num(-78,-3,-27));
	printf("Largest of 2.23, 3.23, 4.09 is : %.2f\n",largest_of_three_num(2.23,3.23,4.09));

	printf("smallest of 2, 3, 4 is : %.2f\n",smallest_of_three_num(2,3,4));
	printf("smallest of -78, -3, -27 is : %.2f\n",smallest_of_three_num(-78,-3,-27));
	printf("smallest of 2.23, 3.23, 4.09 is : %.2f\n",smallest_of_three_num(2.23,3.23,4.09));

	printf("gcd of 22,4 is : %d\n",gcd(22,4));
	printf("gcd of 4,22 is : %d\n",gcd(4,22));
	printf("gcd of 4,20 is : %d\n",gcd(4,20));

	printf("lcm of 22,4 is : %d\n",lcm(22,4));
	printf("lcm of 4,22 is : %d\n",lcm(4,22));
	printf("lcm of 10,23 is : %d\n",lcm(10,23));

	printf("Simple Interest of (1000,2,10) is :%d\n",simple_int(1000,2,10));

	printf("compound Interest of (2000,1,9) is :%d\n",compound_int(2000,1,9));

	printf("45 celsius = %d farheinheit \n",celsius(45));

	printf("563 farheinheit = %d celsius \n",farheinheit(563));

	printf("Sum of 4 is : %d\n",sum_of_n_numbers(4));
	printf("Sum of -4 is : %d\n",sum_of_n_numbers(-4));

};
