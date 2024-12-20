#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5};
    int *p= (int *)(&a+1);
    
    printf("%d",*(p-1));
return 0;
}