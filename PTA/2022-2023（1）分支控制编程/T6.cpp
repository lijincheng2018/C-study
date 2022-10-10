#include<stdio.h>
int main()
{
    char c=getchar();
    if(c>='0' && c<='9') printf("N\n");
    else if(c>='A' && c<='Z') printf("U\n");
    else if(c>='a' && c<='z') printf("L\n");
    else if(c==' ') printf("S\n");
    else printf("O\n");
    return 0;
}
