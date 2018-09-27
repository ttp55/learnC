#include <stdio.h> 
#include <malloc.h>

void f(int * q)
{
	//*p = 200;//error 
	//q = 200;//error
	*q = 200;//不能是 **q = 200;
	//如果后面加free(Q); 就是错误的 因为它把Q所指向的内存释放掉了 
}

int main(void)
{
	int * p = (int *)malloc(sizeof(int));//sizeof(int)返回值是int所占字节数 
	*p = 10;
	
	printf("%d\n", *p);
	f(p);
	printf("%d\n", *p);
	
	return 0;

}
