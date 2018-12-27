#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int er(int n){//自己摸索出的算法，比较有成就感， 
	int i,p=1,m,j,q,y;//i为数字位数，p为过度量，m为累加数，j为循环变量，q为数字每一位的数，y等于n 
	y=n;
	while(n>0){//取数字位数 
		i++;
		n/=10;
	}
	for(j=0;j<i;j++){
		q=y/p%10;//取数字每一位放到q里 
		m=m+pow(2,j)*q;//转10进制计算 
		p*=10;
	}
	return m; 
}

int main(){
	int n,y;
	printf("请输入一个二进制数:");
	scanf("%d",&n); 
	y=er(n);
	printf("%d\n",y);
} 
