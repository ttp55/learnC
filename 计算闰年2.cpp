#include <stdio.h>
#include <windows.h>

int main()
{
	
	int year=2000;
	while(year<=2500)
	{

		if((year%4==0&&year%100!=0)||year%400==0)
		printf("%d������!\n",year);
		else
		printf("%d��������!\n",year);
		year=year+1;
		
	}

}
