#include <stdio.h>
#include "arrayUtil.h"

int main(){
	int arr[]= {1,23,43};
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("Sum of Array of numbers is :%d\n",sum_of_array(arr,length));
	return 0;
}
