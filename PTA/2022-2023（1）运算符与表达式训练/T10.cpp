#include<stdio.h>
int main()
{
    int n,ans;
    scanf("%d",&n);
    ans=n/1000*8+n/100%10*4+n/10%10*2+n%10;
    printf("%d\n",ans);
    return 0;
}