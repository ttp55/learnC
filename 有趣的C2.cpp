#include <stdio.h> 
#define LENGTH 5000
int main() 
{ 
char str[LENGTH]={0}; 
printf("������Ҫ������ַ���:"); 
gets(str); 
printf("��������ĳ�������н����\n"); 
int *p=(int*)str;
printf("#include<stdio.h>\nint main()\n{\n\tint data[]=");
char del='{';
while (*p) 
{ 
   printf("%c%d",del,*p++);
   del=',';
} 
printf(",0};\n\tprintf(\"%%s\",data);\n}\n");
}

