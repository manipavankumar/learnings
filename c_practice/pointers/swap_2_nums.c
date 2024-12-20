#include<stdio.h>


void swap(int *a,int *b)
{   
    int tmp =*a;
    *a = *b;
    *b = tmp; 

    /*  using XOR(^) bit operator
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;    */
    
}


int main()
{
   int a=10,b=20;

   swap(&a,&b);

   printf("%d\t%d ",a,b);

return 0; 
}