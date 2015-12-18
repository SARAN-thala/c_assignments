var fibo = function(num){
	if(num==1)
		return 0;
	if(num==2)
		return 1;
	return fibo(num-1)+fibo(num-2);
};
console.log(fibo(5));
