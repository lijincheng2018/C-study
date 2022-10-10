#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>0) printf("%d\n",1-x);
    else if(x==0) printf("2\n");
    else if(x<0){
        int tmp=pow((1-x),2);
        printf("%d\n",tmp);
    }
    return 0;
}
