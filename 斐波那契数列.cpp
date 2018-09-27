#include <stdio.h>

int feibonaqi(int i)
{
   if(i == 0)
   {
      return 0;
   }
   if(i == 1)
   {
      return 1;
   }
   return feibonaqi(i-1) + feibonaqi(i-2);
}

int  main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
       printf("%d\t%n", feibonaqi(i));
    }
    return 0;
}
