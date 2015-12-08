#include <stdio.h>
#include <math.h>

int is_even_or_is_odd(int num){
	return num & 1;
};

int square(int num){
	int result=num*num;
	return result;
};

int cube(int num){
	int result = num*num*num;
	return result;
};

int average_of_three_num(float num1, float num2, float num3){
	float result = (num1+num2+num3)/3;
	return result;
};

// int average_of_three_num_in_percentage(int num1, int num2, int num3, int n){
// 	return (average_of_three_num(num1,num2,num3)/n)*100;
// }

float largest_of_three_num(float a, float b, float c){
	if(a>b && a>c)
		return a;
	else if(b>c && b>a)
		return b;
	else
		return c;
};

float smallest_of_three_num(float a, float b, float c){
	if(a<b && a<c)
		return a;
	else if(b<c && b<a)
		return b;
	else
		return c;
};

int gcd(int a, int b){
	if(a==0)
		return b;	
	while(b!=0){
		if(a>b)
			a=a-b;
		else
			b=b-a;
	};
	return a;
};

int lcm(int a, int b){
	return (a*b)/gcd(a,b);
};

int simple_int(int p, int n, int r){
	int interest = ((p*n*r)/100);
	return interest;
}

int compound_int(int p,int n,int r){
	float total = p*(pow(1+(r/100),n));
	return total;
}














