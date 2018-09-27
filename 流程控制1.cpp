#include <stdio.h>
int main()
{
	int num=1000;
	int drinkNum=0;
	int emptyNum=0;
	while(num>0)
	{
		num--;
		drinkNum++;
		emptyNum++;
		if(emptyNum==3)
		{
			num++;
			emptyNum=0;
		}
	}
	printf("总共喝掉瓶数:%d\n剩余空瓶子数:%d",drinkNum,emptyNum);
	
}
