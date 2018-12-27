#include <stdio.h>
int main(){
	int n=123456,i,j,m,p=1,y;
	y=n;
	while(n>0){
		i++;
		n/=10;
	}
	
	for(j=1;j<i;j++){
		m=y/p%10;
		p*=10;
		printf("m:%d\n",m); 
		
	}
}
