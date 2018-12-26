#include <stdio.h>

void quickSort(int s[],int l,int r){
	if(l<r){
		int i=l,j=r,x=s[l];
		while (i<j){
			while(i<j && s[j]>=x){//自右向左找小于x的元素，如果大于就j-- 
				j--;
			}
			if(i<j){
				s[i++]=s[j];//将小于x的元素移到i的位置 
			}
			while(i<j && s[i]<x){//自左向右找大于x的元素，如果小于就i++ 
				i++;
			}
			if(i<j){
				s[j--]=s[i];//将大于x的元素移到j的位置 
			}
		}
		s[i]=x;//最后把x放到i的位置 
		quickSort(s,l,i-1);//递归调用，将分治出来的两边的元素再次进行排序 
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
