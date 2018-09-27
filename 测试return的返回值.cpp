#include <stdio.h>
int f(int i)
{
	return 4533455;//更改数字以测试return的值 
}
int main(void)
{
	int i=88;
	
	printf("%d\n",i);
	i=f(4);//将f函数的值赋给i 
	printf("%d\n",i);
	
	return 0;
}
