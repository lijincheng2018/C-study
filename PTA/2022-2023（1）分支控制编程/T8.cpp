#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("** Time table **\n1 morning\n2 afternoon\n3 night\n********\n");
    switch (a)
    {
        case 1:
            printf("Good morning!\n");
            break;
        case 2:
            printf("Good afternoon!！\n");
            break;
        case 3:
            printf("Good night!\n");
            break;
        default:
            printf("Selection error!\n");
            break;
    }
    return 0;
}
