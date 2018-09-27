#include <stdio.h>
int main()
{
	int * p;
	int i=3;
	int j;
	p=&i;
	j=*p;
	printf("%d,%d",p,j);
	
	for(i=3;i<100;i++){
		printf("%d\n",i);
	}


} 
