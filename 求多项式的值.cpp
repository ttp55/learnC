#include <stdio.h>
int main()
{
	int sign=1;//sign 作用是判断正负 初始值为1
	double deno=2.0,sum=1.0,term;//deno是分母,sum为各项和,term为当前项的值 
	while(deno<=100)
	{
		sign=(-1)*sign;
		term=sign*(1/deno);
		sum=sum+term;
		deno=deno+1;
	} 
	printf("此多项式的值为:%f\n",sum);
}
