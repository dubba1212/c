#include <stdio.h>

int main()
{
int n,a=0,b=1,c,i;
scanf("%d",&n);
printf("%d\t%d\t",a,b);
for(i=2;i<n;i++)
{
   c=a+b;
   a=b;
   b=c;
   
   printf("%d\t",c);
}
    return 0;
}
