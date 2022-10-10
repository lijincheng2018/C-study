#include<stdio.h>
#include<math.h>
int main()
{
    double deposit,rate,amount;
    int n;
    scanf("%lf%lf%d",&deposit,&rate,&n);
    rate/=100;
    amount=deposit*pow((1+rate),n);
    printf("%.2lf\n",amount);
    return 0;
}