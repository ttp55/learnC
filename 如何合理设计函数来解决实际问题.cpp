# include <stdio.h>
//������ 

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
	printf("������һ������:"); 
	scanf("%d",&val);
	if(IsPrime(val))
		printf("yes!\n");
		
	else
		printf("no!\n");	
		return 0;


} 
