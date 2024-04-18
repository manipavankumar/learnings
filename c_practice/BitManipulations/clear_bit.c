#include<stdio.h>

int main()
{
    int a=10;
    /*below we are clearing the first(1) bit and assiging 
    result to variable 'a' itself*/
    a=a&~(1<<1); //logic to clear a bit!
    printf("%d",a); 
}