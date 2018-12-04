#include <stdio.h>
int main(){
	int i,x;

	FILE *fp = fopen("d:\\f1.txt","r");
	fscanf(fp,"%d",&i);
	
	fclose(fp);
	x=i+1;
	FILE *fp1 = fopen("d:\\f1.txt","w");
	fprintf(fp1,"%d",x);
	fclose(fp1);

	return 0;
} 
