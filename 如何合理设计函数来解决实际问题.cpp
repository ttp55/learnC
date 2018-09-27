# include <stdio.h>
//求素数 

bool IsPrime(int val)
{
	int i;
	
	for(i=2;i<val;++i)
	{
		if (0==val%i)
			break;
	}
	if(i==val)
		return true;
	else
		return false;

}

int main(void)
{
	int val;
	printf("请输入一个数字:"); 
	scanf("%d",&val);
	if(IsPrime(val))
		printf("yes!\n");
		
	else
		printf("no!\n");	
		return 0;


} 
