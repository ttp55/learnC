#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,s,area;//area����� 
	aaa:
	printf("�����������εı߳�(�м��ö��Ÿ���):");
	scanf("%lf,%lf,%lf",&a,&b,&c);//����˫���ȱ�����ֵҪ�ø�ʽ����"%lf" 
	if(a+b<=c||a+c<=b||c+b<=a||a<0||b<0||c<0)
	{
	printf("��������ȷ�ı߳�!\n");
	goto aaa;
	}
	else
	{
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));//math��ĺ���sqrt
	printf("a=%f\tb=%f\tc=%f\n",a,b,c);
	printf("area=%f\n",area);
	}
	return 0;
}
