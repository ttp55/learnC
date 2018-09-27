#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
#define N 3//控制闪动时间:单位1/s
int main() 
{ 

int i,k,a[10],b[10],s=0,n;


srand(time(NULL));
printf("\n\t\t\t按1开始\n\t\t\t按0退出:_");
scanf("%d",&n);
system("cls");
while(n!=0)
{

for(k=0;k<10;k++)
a[k]=rand()%10;
printf("\n\t\t\t 【请牢记您看到颜色的顺序】\n\n");
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
printf("0:淡蓝色,1:白色,2:淡红色,3:淡紫色,4:灰色,5:黄色,6:蓝色7:绿色,8:浅绿色,9:红色\n");
printf("\n\t请输入颜色的顺序:");
for(k=0;k<10;k++)
scanf("%d",&b[k]);
for(k=0;k<10;k++)
if(a[k]==b[k])
s=s+10;
if(s<40)
printf("\n\t你的记忆力相当差哦!\n\n\n\n");
if(s>=40&&s<80)
printf("\n\t你的记忆力正常哦!\n\n\n\n");
if(s>=80)
printf("\n\t恭喜你!你的记忆力已经超于常人了!\n\n\n\n");
for(time=0; time<3*33e+7; time++);
system("cls");
printf("\n\t\t\t按0退出\n\t\t\t按任意键继续游戏:\n");
scanf("%d",&n);
system("cls");}
}
