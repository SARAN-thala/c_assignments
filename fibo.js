var fibo = function(num){
	if(num==1)
		return 0;
	if(num==2)
		return 1;
	return fibo(num-1)+fibo(num-2);
};
console.log(fibo(5));
console.log('saran');
// XXX: i think its very difficult code to understand

function average(a,b,c) {
	return (a+b+c)/3;
}
console.log(average(2,3,4));
