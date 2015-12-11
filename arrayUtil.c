#include <stdio.h>
#include <math.h>

int sum_of_array(){
	int num_arr[10];
	int sum=0;

	for (int i = 0; i < 10; ++i){
		sum = sum+num_arr[i];
	}
	return sum;
};