#include<stdio.h>
int main()
{
    int a,max=-9999999;
    for(int i=1;i<=3;i++)
    {
        scanf("%d",&a);
        if(a>max) max=a;
    }
    printf("%d\n",max);
    return 0;
}
