// var fibo = function(num){
// 	if(num==1)
// 		return 0;
// 	if(num==2)
// 		return 1;
// 	return fibo(num-1)+fibo(num-2);
// };
// console.log(fibo(5));

var sum = function(a,b){
	return (function add(x,y){
		return x+y;
	});
};

console.log(sum(3,14));
