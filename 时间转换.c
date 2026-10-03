#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n/3600;
    int b=n%3600/60;
    int c=n%3600%60;
    printf("%d %d %d",a,b,c);
    return 0;
}
