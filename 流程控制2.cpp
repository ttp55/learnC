#include <stdio.h>
int main()
{
	int num=1000;
	int drinkNum=0;
	int emptyNum=0;
	while(num>0)
	{
		drinkNum+=num;
		emptyNum+=num;
		num=emptyNum/3;
		emptyNum-=num*3;
	}
	printf("�ܹ��ȵ�ƿ��:%d\nʣ���ƿ����:%d",drinkNum,emptyNum);
}
