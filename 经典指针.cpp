# include<stdio.h>

void huhuan(int,int);
void huhuan2(int *,int *);
void huhuan3(int *,int *);

int main(void)
{
	int a = 3;
	int b = 5;

	huhuan3(&a,&b);//(*p ,*q)不对 (a,b)也不对 

	printf("a=%d,b=%d\n",a,b);
	
	return 0;
	
} 
//可以完成 

void huhuan3(int * p,int * q)
{
	int  t;//如果要互换*P和*Q的值 T必须是int 
		
	t = *p;//p是int *,*p是int 
	*p = *q;
	*q = t;
} 


//仍然不行 

void huhuan2(int * p, int * q)
{
	int * t;//如果要互换P和q的值 T必须int*t 
	
	t = p;
	p = q;
	q = t;
}


//不能完成互换 

void huhuan(int  a,int b)
{
	int t;
	
	t=a;
	a=b;
	b=t;
	
	return ; 
}
