#include <stdio.h>
int f(int i)
{
	return 4533455;//���������Բ���return��ֵ 
}
int main(void)
{
	int i=88;
	
	printf("%d\n",i);
	i=f(4);//��f������ֵ����i 
	printf("%d\n",i);
	
	return 0;
}
