#include <stdio.h>
int main()
{
	char c1,c2,c3,c4,c5;
	c1=getchar();
	c2=getchar();
	c3=getchar();
	c4=getchar();
	c5=getchar();
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	putchar('\n');
	putchar(c1+4);
	putchar(c2+4);
	putchar(c3+4);
	putchar(c4+4);
	putchar(c5+4);
	putchar('\n');
	printf("%c",c1+4);
	printf("%c",c2+4);
	printf("%c",c3+4);
	printf("%c",c4+4);
	printf("%c",c5+4);
	return 0;
} 
