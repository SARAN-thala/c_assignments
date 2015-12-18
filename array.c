#include <stdio.h>
#include "arrayUtil.h"

int main(){
	int arr[]= {1,23,43,23,12};
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("Sum of Array of numbers is :%d\n",sum_of_array(arr,length));
	int arr1[]= {1,23,43};
	int len = sizeof(arr1)/sizeof(arr1[0]);
	printf("Sum of Array of numbers is :%d\n",sum_of_array(arr1,len));

	int n[]={1,2,3,4};
	int leng = sizeof(n)/sizeof(n[0]);
	printf("Reverse array : \n");
	reverse(n,leng);
	return 0;
}
