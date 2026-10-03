#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int S=2*(a*b+b*c+c*a);
    int V=a*b*c;
    printf("%d\n%d",S,V);
    return 0;
}
