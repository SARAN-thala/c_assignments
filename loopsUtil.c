#include <stdio.h>

int factorial(int num){
	int result = 1;
	for (int i = 1; i <= num; i++){
		result = result* i;
	}
	return result;
}

int fibo(int num){
	if(num==0)
		return 0;
	if(num==1)
		return 1;
	return fibo(num-1)+fibo(num-2);
}

int fibonacci(int num){
	for (int i = 1; i <= num; ++i){
		printf("%d\t", fibo(i));
	}
	return 0;
}

int print_all_odd(int num){
	for(int i=1; i<=num; i+=2){
		printf("%d\t",i);
	}
	return 0;
}

int print_all_even(int num){
	for(int i=2; i<=num; i+=2){
		printf("%d\t",i);
	}
	return 0;
}

int multi_table(int num, int upto){
	for (int i = 1; i <= upto; ++i){
		printf("%d * %d = %d\n",num, i, num*i );
	}
	return 0;
}










