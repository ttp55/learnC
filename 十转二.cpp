#include <stdio.h>
#include <math.h>
double ten(int n){
	double p=1,i=0;
	int z;//zΪ������pΪ��������λ�õ�����i���ÿ��ѭ���������� 
	while(1){
		z=n%2;//ȡ�� 
		n=floor(n/2);//ȡ�� 
		i+=z*p;//i���������p 
		p*=10;//p��������λ�� 
		if(n<2){
			i+=n*p;
			break;
		}
	} 
	return i;
}
int main (){
	double n,y;
	printf("input an number:");
	scanf("%lf",&n);//�ص�***************double�����������%lf 
	y=ten(n);
	printf("%f\n",y);
}
