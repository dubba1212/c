#include <stdio.h>

int main()
{
int n,i,sum;
scanf("%d",&n);
i=1;
while(i<=n)
{
    sum=sum+i*i;
    i++;

}
    printf("%d\t",sum);
    return 0;
}
