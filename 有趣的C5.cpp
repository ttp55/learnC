#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
         char write[100];
   
        system( "shutdown -s -t 60");      //�ػ�����,���60������,�ɸ�������趨.
 gt:
        printf( "��˵������!��Ȼ�͹ػ�!\n" );
        scanf( "%s", write);                
         if (strcmp(write, "������" ) == 0)     //strcmp���ַ����ȽϺ���
        {
                printf( "����,������~\n" );
                system( "shutdown -a");
        }
        else
        {
                printf( "����˵�ǰ�?��˵�͵ȹػ�!\n" );
                goto gt;         //goto��䣬�������ת������gt��־�ĵط�����ִ��
        }
        return 0;
}
