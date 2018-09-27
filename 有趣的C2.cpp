#include <stdio.h> 
#define LENGTH 5000
int main() 
{ 
char str[LENGTH]={0}; 
printf("请输入要输出的字符串:"); 
gets(str); 
printf("试试下面的程序的运行结果：\n"); 
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

