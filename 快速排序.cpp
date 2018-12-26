#include <stdio.h>

void quickSort(int s[],int l,int r){
	if(l<r){
		int i=l,j=r,x=s[l];
		while (i<j){
			while(i<j && s[j]>=x){//����������С��x��Ԫ�أ�������ھ�j-- 
				j--;
			}
			if(i<j){
				s[i++]=s[j];//��С��x��Ԫ���Ƶ�i��λ�� 
			}
			while(i<j && s[i]<x){//���������Ҵ���x��Ԫ�أ����С�ھ�i++ 
				i++;
			}
			if(i<j){
				s[j--]=s[i];//������x��Ԫ���Ƶ�j��λ�� 
			}
		}
		s[i]=x;//����x�ŵ�i��λ�� 
		quickSort(s,l,i-1);//�ݹ���ã������γ��������ߵ�Ԫ���ٴν������� 
		quickSort(s,i+1,r);
	}
}

int main (){
	int a[15]={32,4,2,52,632,7634,324,82,63,6453,23,532,724,762,4898};
	
	int i=0,j=14;
	int x=a[i]; 
	quickSort(a,i,j);
	for(int n=0;n<15;n++){
		printf("%d ",a[n]);   
	}
}
