#include <stdio.h>
int main()
{
	int a,b;
	a=1;
	b=2;
	while(b<=10)
	{
		a=a*b;
		b=b+1;
	}
	printf("%d\n",a);
	return 0;
}
