#include<stdio.h>


int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}

int operation_cal(int (*operator)(int,int),int x,int y)
{
    printf("%d ",operator(x,y));
}

int main(void)
{
    int (*operation)(int,int);
    operation = &add;
    operation_cal(operation,5,6);
    operation = &sub;
    operation_cal(operation,5,6);

return 0;
}