#include <stdio.h>

int sum_of_array(int num_arr[],int len){
	int sum=0;
	for (int i = 0; i < len; ++i){
		sum = sum+num_arr[i];
	}
	return sum;
};

void reverse(int n[], int len){
	for (int i = len-1; i >=0; i--){
		printf("%d",n[i]);
	}
}