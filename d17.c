#include <stdio.h>
int main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    i=1;
    a:
    
        printf("%d",i);
        i++;
        if(i<=n)
        goto a;
        

return 0;
}
