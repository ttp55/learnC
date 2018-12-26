#include <stdio.h>
int main (){
	int a[15]={32,4,2,52,632,7634,324,52,63,6453,23,532,724,762,4898};
	
	for(int i=1;i<15;i++){
		int f=a[i];//把第i个元素放到f中 
		int j=i-1;//把i前面的元素放到j中 
		while(j>=0 && a[j]>f){//如果第j个元素大于第i个元素，那么就把第j个元素向后移一位 
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=f;
	}
	for(int n=0;n<15;n++){
		printf("%d ",a[n]);   
	}
}
