#include<conio.h>
#include<stdio.h> 
main()
{
    int i;
    char *s[]={"BLACK","BLUE","GREEN","CYAN",
    "RED","MAGENTA","BROWN","LIGHTGRAY",};
    textmode(C80);
    textbackground(0);
    clrscr();
    for(i=1;i<8;i++)
    {
        window(10+i*5,5+i,30+i*5,15+i);
        /*������: window 
        �� ��: �����ı�ģʽ����
        �� ��: void window(int left, int top, int right, int bottom); 
        ��������ʽ����(int left,  int top)�Ǵ������Ͻǵ�����,
        (int right, int  bottom)�Ǵ��ڵ����½�����, 
        */
        textbackground(i);
        clrscr();
        textcolor(7+i);
        if(i%2 == 0)
        highvideo();
        else lowvideo();
        cputs(s[i]);
    }
    getch();

}
