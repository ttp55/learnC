# include <stdio.h>

bool IsPrime(int val)
{
	int i;
	
	for(i=2;i<val;++i)
	{
		if(val%i == 0)
		return true;
		else
		return false;//这样写比下面的写法更简便 
	}

} 
/*bool IsPrime(int val)
{
	int i;
	
	for(i=2;i<val;++i)
	{
		if (val%i == 0)
			break;
	}
	if(i==val)
		return true;
	else
		return true;
*/
int main(void)
{
	int m;
	
	scanf("%d",&m);
	if(IsPrime(m))
		printf("Yes!\n");
	else
		printf("No!\n");
	return 0;
}




