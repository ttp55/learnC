#include <stdio.h>
int main()
{
	int sign=1;//sign �������ж����� ��ʼֵΪ1
	double deno=2.0,sum=1.0,term;//deno�Ƿ�ĸ,sumΪ�����,termΪ��ǰ���ֵ 
	while(deno<=100)
	{
		sign=(-1)*sign;
		term=sign*(1/deno);
		sum=sum+term;
		deno=deno+1;
	} 
	printf("�˶���ʽ��ֵΪ:%f\n",sum);
}
