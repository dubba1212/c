#include <stdio.h>

int main()
{
int a=5,b=10,c=11,d;
d= ++a + --b * --c;
printf("%d\t%d\t%d\t%d",a,b,c,d);
return 0;
}
