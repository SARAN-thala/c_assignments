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