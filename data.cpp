#include <stdio.h> 
int main (){
	int mouth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int cury,curm,curd,nexty,nextm,nextd;
	data:
	printf("���������ڣ�\n");
	scanf("%d %d %d",&cury,&curm,&curd);
	if((cury%4==0 && cury%100!=0) || cury%400==0) mouth[1]=29;
	if(cury>9999||cury<0||curm<0||curm>12||curd<0||curd>mouth[curm-1]){
		printf("���ڲ���ȷ�����������룡\n");goto  data;}
	nextd = curd == mouth[curm-1] ? 1 : ++curd;
	nextm = curm == 12 && curd == mouth[curm-1]? 1 : curd == mouth[curm-1]? ++curm : curm;
	nexty = curm == 12 && curd == mouth[curm-1]? ++cury : cury;
	printf("%d %d %d",nexty,nextm,nextd);
}
