#include <stdio.h>
int main()
{

	long p,m,i;
	scanf("%d,%d",&p,&m);
	i=p+1;
	while(i<=m)
	{
		p=p*i;
		i=i+1;
	}
	printf("%d\n",p);
	return 0;


}



