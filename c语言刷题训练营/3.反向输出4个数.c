#include <stdio.h>
int main()
{
   int a[4]={0};
   int n = 0;
   scanf("%d", &n);
   a[0]=n % 10;
   a[1]=n/10%10;
   a[2]=n/100%10;
   a[3]=n/1000;
   printf("%d%d%d%d",a[0],a[1],a[2],a[3]);
   return 0;
}
//字符串或直接写也可以