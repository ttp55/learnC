#include <stdio.h>
int main (){
	int a[15]={32,4,2,52,632,7634,324,76,63,6453,23,532,724,762,4898};
	int left=0;
	int right=14;
	int flag;
	while(left<right){
		
		for(int i=left;i<right;i++){
			if(a[i]>a[i+1]){
				int tmp=a[i+1];
				a[i+1]=a[i];
				a[i]=tmp;
				flag=1;
			}
		}
		right--;
		///printf("right:%d\n",right);
		for(int j=right;j>left;j--){
			if(a[j]<a[j-1]){//½»»»ÔªËØÎ»ÖÃ 
				int tmp=a[j-1];
				a[j-1]=a[j];
				a[j]=tmp;
				
			}
		}
		left++;
	//	printf("left:%d\n",left);
	}
	for(int n=0;n<15;n++){
		printf("%d ",a[n]);   
	}
}
