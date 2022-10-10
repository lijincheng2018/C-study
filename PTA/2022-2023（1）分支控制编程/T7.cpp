#include<stdio.h>
int main()
{
    int a,bit=0;
    scanf("%d",&a);
    if(a==0) printf("1\n");
    while(a)
    {
        bit++;
        a/=10;
    }
    if(bit<=4) printf("%d\n",bit);
    else printf("input err!\n");
    return 0;
}
