#include <stdio.h>

int add(int x, int y){return x+y;}
int sub(int x, int y){return x-y;}
int mul(int x, int y){return x*y;}
int div(int x, int y){return x/y;}


int main(void)
{
    int (*operation[])(int,int)={add,sub,mul,div};
    for(int i=0;i<4;i++)
        printf("\nresult :%d",operation[i](5,6));
return 0;
}
