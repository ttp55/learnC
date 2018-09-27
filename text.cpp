#include <stdio.h>
/*张羽给出的题*/
int main()
{
	int i;
	for(i=0;i<65535;i++)
	{
	
		if(i%1==0&&i%2==1&&i%3==0&&i%4==1&&i%5==1&&i%6==3&&i%7==0&&i%8==1&&i%9==0)
		{
			printf("结果是:%d",i);
		}
		
	}
	
}
