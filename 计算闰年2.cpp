#include <stdio.h>
#include <windows.h>

int main()
{
	
	int year=2000;
	while(year<=2500)
	{

		if((year%4==0&&year%100!=0)||year%400==0)
		printf("%d是闰年!\n",year);
		else
		printf("%d不是闰年!\n",year);
		year=year+1;
		
	}

}
