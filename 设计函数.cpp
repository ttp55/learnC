# include <stdio.h>

//用一个函数来判断一个数是否是素数 

void TraverseVal(int n)
{
	int i;
	
	for(i=2;i<=n;++i)
	{
		if(IsPrime(i))
		printf("%d\n",i);
	}
}
/*这里没搞太明白 
*/
bool IsPrime(int m)
{
	int i;
	for(i=2;i<m;++i)
	{
		if(0==m%i)
			break;
	}
		if(i==m)
		return true;
		else
		return false;
}
int main(void)
{
	int val;
	int i;

	scanf("%d",&val);
	for(i=2;i<=val;++i)
	{
		if(IsPrime(i))
		printf("%d\n",i);
	}
	
	return 0;
	
} 
