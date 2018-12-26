#include <stdio.h>
int main (){
	int a[15]={32,4,2,52,632,7634,324,52,63,6453,23,532,724,762,4898};
	
	for(int i=0;i<14;i++){ 
		int minIndex=i;
		for(int j=i+1;j<15;j++){//从第i+1个元素开始比较大小， 
			if(a[minIndex]>a[j]){
				minIndex=j;
			}
		}
		int tmp=a[i];
		a[i]=a[minIndex];
		a[minIndex]=tmp;
	}
	for(int n=0;n<15;n++){
		printf("%d ",a[n]);   
	}
}
