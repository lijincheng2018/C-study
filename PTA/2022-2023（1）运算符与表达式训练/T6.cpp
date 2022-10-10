#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("integer %d:\nunit digit %d,tens place %d,hundreds place %d\n",a,a%10,a/10%10,a/100);
    return 0;
}