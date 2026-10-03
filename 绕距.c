#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2;
    int y1,y2;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    int dx=x1-x2;
    int dy=y1-y2;
    double dE=sqrt(dx*dx+dy*dy);
    double dM=abs(dx)+abs(dy);
    double res=fabs(dM-dE);
    printf("%lf",res);
    return 0;
}

