#include <stdio.h>
int main (){
	int a[15]={32,4,2,52,632,7634,324,76,63,6453,23,532,724,762,4898};
	int i=14;//i��0Ϊ15�� 
	while(i>0){
		int p=0;
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){
				p=j;//����ǰ������λ�ü�¼���� 
				int tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
			}
			
		}i=p;//����ǰ������λ�ø���i��Ϊ��һ��ѭ���Ĵ��� 
	//	printf("%d\n",p);
	}
	for(int n=0;n<15;n++){
		printf("%d ",a[n]); 
	}
}

