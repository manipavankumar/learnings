#include<stdio.h>
#include<stdlib.h>
int *add_nums(int *a,int *b)
{
    int *res= (int *)malloc(sizeof(int)); 
    *res= *a + *b;
    /*here we are using DMA because if we use normal pointer it will treat as local variable basically(when activation record(stack frame) destroys varible will be no more).
    to achive this without DMA we can go witch static key word*/

    //static int res =*a + *b;
    //return &res;
    
    return res;
    free(res);
}


int main()
{
    int a=10,b=10;
    int *p;
    p=add_nums(&a,&b);
    printf("%d",*p);
return 0;
}