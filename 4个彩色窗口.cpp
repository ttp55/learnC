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
        /*函数名: window 
        功 能: 定义活动文本模式窗口
        用 法: void window(int left, int top, int right, int bottom); 
        函数中形式参数(int left,  int top)是窗口左上角的坐标,
        (int right, int  bottom)是窗口的右下角坐标, 
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
