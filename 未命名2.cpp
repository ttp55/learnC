#include <stdio.h>
int main() 
{ 
	int i; 
	double k=1; 
	for(i=1;i<=100;i++) 
	{ 
		k=k*i; 
       printf("%d!=%e\n",i,k); 
	} 
}
