#include <stdio.h>
int main()
{
	char a,b,c;//定义字符变量 
	a=getchar();//从键盘上输入一个字符送给字符变量abc 
	b=getchar();
	c=getchar();
	putchar(a);//将变量abc的值输出 
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}
