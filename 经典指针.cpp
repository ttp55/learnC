# include<stdio.h>

void huhuan(int,int);
void huhuan2(int *,int *);
void huhuan3(int *,int *);

int main(void)
{
	int a = 3;
	int b = 5;

	huhuan3(&a,&b);//(*p ,*q)���� (a,b)Ҳ���� 

	printf("a=%d,b=%d\n",a,b);
	
	return 0;
	
} 
//������� 

void huhuan3(int * p,int * q)
{
	int  t;//���Ҫ����*P��*Q��ֵ T������int 
		
	t = *p;//p��int *,*p��int 
	*p = *q;
	*q = t;
} 


//��Ȼ���� 

void huhuan2(int * p, int * q)
{
	int * t;//���Ҫ����P��q��ֵ T����int*t 
	
	t = p;
	p = q;
	q = t;
}


//������ɻ��� 

void huhuan(int  a,int b)
{
	int t;
	
	t=a;
	a=b;
	b=t;
	
	return ; 
}
