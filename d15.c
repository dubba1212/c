#include <stdio.h>
#include<math.h>
int main()
{
int n,i,sum=0,r,count=0,num;
printf("enter the number");
scanf("%d",&n);
for(i=n;i>0;i=i/10)
count++;
for(i=n;i>0;i=i/10)
{
    r=i%10;
    sum=sum+pow(r,count);
}
if(sum==n)
    printf("it is armstrong");
else
printf("not armstrong");
return 0;
}
