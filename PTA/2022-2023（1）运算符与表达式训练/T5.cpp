#include<stdio.h>
int main()
{
    int a,b,c,money,ten=0,yuan=0,jiao=0;
    scanf("%d%d%d",&a,&b,&c);
    money=a*10+b*5+c;

    ten=money/100;
    yuan=(money/10)%10;
    jiao=money%10;
    printf("%d %d %d\n",ten,yuan,jiao);
    return 0;
}