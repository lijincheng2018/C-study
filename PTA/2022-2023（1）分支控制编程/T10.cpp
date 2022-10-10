#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[10];
    scanf("%d%d%d",&a[1],&a[2],&a[3]);
    sort(a+1,a+4);
    printf("%d %d %d\n",a[1],a[2],a[3]);
    return 0;
}