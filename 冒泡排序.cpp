#include <stdio.h>

int main (){
	int a[15]={32,4,2,52,632,7634,324,76,63,6453,23,532,724,762,4898};
	
	for(int i=0;i<15;i++){// 根据数组长度定义循环次数 
		for(int j=0;j<14-i;j++){//i最大为14,14-i为0时结束 
			if(a[j]>a[j+1]){//交换元素位置 
				int tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(int i=0;i<15;i++){
		printf("%d ",a[i]); 
	}
	
}
