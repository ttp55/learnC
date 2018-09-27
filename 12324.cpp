#include <stdio.h>

void g(int * m, int * n)
{
	*m=6;
	*n=1;
}

int main(void){
	int a=2;
	int b=5;
	
	g(&a,&b);
	
	printf("%d %d\n",a,b);
	
	return 0;
	
	
}
