#include<stdio.h>
int main()
{
    long long n,m;
    scanf("%lld%lld",&n,&m);
    
    if(n>m) printf("%lld>%lld\n",n,m);
    if(n>=m) printf("%lld>=%lld\n",n,m);
    if(n<m) printf("%lld<%lld\n",n,m);
    if(n<=m) printf("%lld<=%lld\n",n,m);
    if(n!=m) printf("%lld!=%lld\n",n,m);
    if(n==m) printf("%lld==%lld\n",n,m);
    return 0;
}
