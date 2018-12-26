#include <stdio.h>
#include <math.h>
int main(){
	int a[15]={32,4,2,52,632,7634,324,52,63,6453,23,532,724,762,4898};
	int len=15;
	int gap=1; 
	int j;
	while(gap<len/5){//动态定义间隔序列  希尔排序，以下内容暂时理解不了 
		gap =gap*5+1;
		printf("gap1:%d\n",gap);
	}
	for(gap;gap>0;gap=floor(gap/5)){//向下取整 
	printf("gap2:%d\n",gap); 
		for (int i=gap;i<len;i++){
			int temp = a[i];
			printf("temp:%d\n",temp);
			for(j=i-gap;j>=0 && a[j]>temp;j-=gap){
				a[j+gap]=a[j];
				printf("j:%d\n",j);
			}
			a[j+gap]=temp;
		}
		
	} 
	for(int n=0;n<15;n++){
		printf("%d ",a[n]);   
	}
}
