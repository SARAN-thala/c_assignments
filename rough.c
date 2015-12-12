// #include <stdio.h>

// int main(void){
// 	int a=23;
// 	int b=2;
// 	int c=a+b;
// };
// -------------------------------------------

// #include <stdio.h>

// int main(void){
// 	long int a;
// 	float b;
// 	double c;
// 	char d;

// 	printf("Address of a : %ld\n", &a);
// 	printf("Address of b : %ld\n", &b);
// 	printf("Address of c : %ld\n", &c);
// 	printf("Address of d : %ld\n", &d);
// }

// -------------------------------------------------

// #include <stdio.h>

// int factorial(unsigned int i) {

//    if(i <= 1) {
//       return 1;
//    }
//    return i * factorial(i - 1);
// }

// int  main() {
//    int i = 15;
//    printf("Factorial of %d is %d\n", i, factorial(i));
//    return 0;
// }

// --------------------------------------------------------

// #include <stdio.h>

// int fibonaci(int i) {

//    if(i == 0) {
//       return 0;
//    }
	
//    if(i == 1) {
//       return 1;
//    }
//    return fibonaci(i-1) + fibonaci(i-2);
// }

// int  main() {

//    int i;
	
//    for (i = 0; i < 10; i++) {
//       printf("%d\t\n", fibonaci(i));
//    }
	
//    return 0;
// }
// --------------------------------------------------------------

// #include <stdio.h>
// #include <stdarg.h>

// double average(int num,...) {

//    va_list valist;
//    double sum = 0.0;
//    int i;

//    va_start(valist, num);

//    for (i = 0; i < num; i++) {
//       sum += va_arg(valist, int);
//    }
	
//    va_end(valist);

//    return sum/num;
// }

// int main() {
//    printf("Average of 2, 3, 4, 5,34 = %f\n", average(5, 2,3,4,5,34));
//    printf("Average of 2,32,32,1,22,45,678,5,10,15 = %f\n", average(10, 2,32,32,1,22,45,678,5,10,15));
// }

#include <stdio.h>

int print_even(int arr[],int len){
	for (int i = 0; i < len; ++i){
			printf("the even number is : %d\n",arr[i]);
	}
	printf("yooohiooo first void function\n");
	return 23;
}


void swap(int *a, int *b,int *temp){
	*temp = *a;
	*a = *b;
	*b = *temp;
}

int main(){
	int a[] = {3,2,1,10,8,5};
	int length = sizeof(a)/sizeof(a[0]);
	print_even(a,length);
	//pointer example
	int first = 20;
	int second = 30;
	int temp;
	printf("before swaping a is :%d and b is :%d and temp is: %d\n",first,second,temp);
	swap(&first,&second,&temp);
	printf("after swaping a is %d and b is %d and temp is :%d",first,second,temp);
}
 








































