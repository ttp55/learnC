#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int er(int n){//�Լ����������㷨���Ƚ��гɾ͸У� 
	int i,p=1,m,j,q,y;//iΪ����λ����pΪ��������mΪ�ۼ�����jΪѭ��������qΪ����ÿһλ������y����n 
	y=n;
	while(n>0){//ȡ����λ�� 
		i++;
		n/=10;
	}
	for(j=0;j<i;j++){
		q=y/p%10;//ȡ����ÿһλ�ŵ�q�� 
		m=m+pow(2,j)*q;//ת10���Ƽ��� 
		p*=10;
	}
	return m; 
}

int main(){
	int n,y;
	printf("������һ����������:");
	scanf("%d",&n); 
	y=er(n);
	printf("%d\n",y);
} 
