#include <stdio.h>

int factorial(int num){
	int result = 1;
	for (int i = 1; i <= num; i++){
		result = result* i;
	}
	return result;
};

int fibo(int num){
	if(num==0)
		return 0;
	if(num==1)
		return 1;
	return fibo(num-1)+fibo(num-2);
};

int fibonacci(int num){
	int fibo = 0;
	for (int i = 1; i <= num; ++i){
		fibo = fibo+i;
		printf("%d\n",fibo);
	}
	return 0;
};

int print_all_odd(int num){
	for(int i=1; i<=num; i+=2){
		printf("%d\t",i);
	}
	return 0;
};

int print_all_even(int num){
	for(int i=2; i<=num; i+=2){
		printf("%d\t",i);
	}
	return 0;
};

int all_odd_print(int num1,int num2){
	for (int i = num1; i < num2; i++) {
		if(i%2==1)
		printf("%d\t", i);
	};
	return 0;
};

int all_even_print(int num1,int num2){
	for (int i = num1; i < num2; i++) {
		if(i%2==0)
		printf("%d\t", i);
	};
	return 0;
};

int every_Nth_num(int n,int num1,int num2){
	for (int i = num1; i <= num2; i+=n) {
		printf("%d\t", i);
	};
	return 0;
};

int print_all_odd_rev(int num){
	for(int i=num; i>=1; i--){
		if(i%2==1)
		printf("%d\t",i);
	}
	return 0;
};

int print_all_even_rev(int num){
	for(int i=num; i>=2; i--){
		if(i%2==0)
		printf("%d\t",i);
	}
	return 0;
};

int multi_table(int num, int upto){
	for (int i = 1; i <= upto; ++i){
		printf("%d * %d = %d\n",num, i, num*i );
	}
	return 0;
};

int sum_of_n(int num){
	int sum=0;
	for (int i = 0; i <= num; i++) {
		sum = sum+i;
	}
	return sum;
};

int product_of_n(int num){
	int sum=1;
	for (int i = 1; i <= num; i++) {
		sum=sum*i;
	};
	return sum;
};

int sum_of_any_num(int num1,int num2){
	int sum=0;
	for (int i = num1; i <= num2; i++) {
		sum = sum+i;
	};
	return sum;
};

int product_of_any_num(int num1,int num2){
	int sum=1;
	for (int i = num1; i <= num2; i++) {
		sum = sum*i;
	};
	return sum;
};

int sum_of_all_odd(int num1,int num2){
	int sum = 0;
	for (int i = num1; i <= num2; i++) {
		if(i%2==1)
		sum = sum+i;
	};
	return sum;
};

int sum_of_all_even(int num1,int num2){
	int sum = 0;
	for (int i = num1; i <= num2; i++) {
		if(i%2==0)
		sum = sum+i;
	};
	return sum;
};
