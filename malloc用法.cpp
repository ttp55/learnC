#include <stdio.h> 
#include <malloc.h>

void f(int * q)
{
	//*p = 200;//error 
	//q = 200;//error
	*q = 200;//������ **q = 200;
	//��������free(Q); ���Ǵ���� ��Ϊ����Q��ָ����ڴ��ͷŵ��� 
}

int main(void)
{
	int * p = (int *)malloc(sizeof(int));//sizeof(int)����ֵ��int��ռ�ֽ��� 
	*p = 10;
	
	printf("%d\n", *p);
	f(p);
	printf("%d\n", *p);
	
	return 0;

}
