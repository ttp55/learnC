#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
#define N 3//��������ʱ��:��λ1/s
int main() 
{ 

int i,k,a[10],b[10],s=0,n;


srand(time(NULL));
printf("\n\t\t\t��1��ʼ\n\t\t\t��0�˳�:_");
scanf("%d",&n);
system("cls");
while(n!=0)
{

for(k=0;k<10;k++)
a[k]=rand()%10;
printf("\n\t\t\t �����μ���������ɫ��˳��\n\n");
//for(k=0;k<10;k++)
//printf("%d",a[k]);
//for(i=0;i<7;i++)
//printf("\t\t\t\t\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
long time;
for(k=0;k<10;k++)
{
switch(a[k])
{
case 0: system("color 90"); break;
case 1: system("color f0"); break;
case 2: system("color c0"); break;
case 3: system("color d0"); break;
case 4: system("color 80"); break;
case 5: system("color e0"); break;
case 6: system("color 10"); break;
case 7: system("color 20"); break;
case 8: system("color 30"); break;
case 9: system("color 40"); break;
}
for(time=0; time<N*33e+7; time++);
system("color f");
for(time=0; time<0.02*33e+7; time++);
}
system("cls");
//system("color f");
printf("0:����ɫ,1:��ɫ,2:����ɫ,3:����ɫ,4:��ɫ,5:��ɫ,6:��ɫ7:��ɫ,8:ǳ��ɫ,9:��ɫ\n");
printf("\n\t��������ɫ��˳��:");
for(k=0;k<10;k++)
scanf("%d",&b[k]);
for(k=0;k<10;k++)
if(a[k]==b[k])
s=s+10;
if(s<40)
printf("\n\t��ļ������൱��Ŷ!\n\n\n\n");
if(s>=40&&s<80)
printf("\n\t��ļ���������Ŷ!\n\n\n\n");
if(s>=80)
printf("\n\t��ϲ��!��ļ������Ѿ����ڳ�����!\n\n\n\n");
for(time=0; time<3*33e+7; time++);
system("cls");
printf("\n\t\t\t��0�˳�\n\t\t\t�������������Ϸ:\n");
scanf("%d",&n);
system("cls");}
}
