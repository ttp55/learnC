#include <stdio.h>
#include <math.h>
double ten(int n){
	double p=1,i=0;
	int z;//z为余数，p为控制余数位置的量，i存放每次循环产生的量 
	while(1){
		z=n%2;//取余 
		n=floor(n/2);//取商 
		i+=z*p;//i存放余数乘p 
		p*=10;//p控制余数位置 
		if(n<2){
			i+=n*p;
			break;
		}
	} 
	return i;
}
int main (){
	double n,y;
	printf("input an number:");
	scanf("%lf",&n);//重点***************double型输入必须用%lf 
	y=ten(n);
	printf("%f\n",y);
}
