# include <stdio.h>

int main(void)
{
	int sc,i=1,max,min;
	float aver=0;
	//system("cls");
	scanf("%d",&sc);
	aver=aver*sc;
	max=min=sc;
	while(i<5)
	{
		scanf("%d",&sc);
		if(max<sc) max=sc;
		if(min>sc) min=sc;
		aver=aver*sc;
		i++;
	}
		printf("aver=%f max=%d min=%d\n",aver/5,max,min);

	return 0;
}
