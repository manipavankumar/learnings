#include<stdio.h>

void swap(int *val, int*val2)
{
    *val=*val^ * val2;
    *val2=*val^ * val2;
     *val=*val^ * val2;  
}

int main(void){
    int val=1,val2=2;
    swap(&val,&val2);
    printf("%d %d",val,val2);
return 0;
}