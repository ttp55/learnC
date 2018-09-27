#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,s,area;//area是面积 
	aaa:
	printf("请输入三角形的边长(中间用逗号隔开):");
	scanf("%lf,%lf,%lf",&a,&b,&c);//输入双精度变量的值要用格式声明"%lf" 
	if(a+b<=c||a+c<=b||c+b<=a||a<0||b<0||c<0)
	{
	printf("请输入正确的边长!\n");
	goto aaa;
	}
	else
	{
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));//math里的函数sqrt
	printf("a=%f\tb=%f\tc=%f\n",a,b,c);
	printf("area=%f\n",area);
	}
	return 0;
}
