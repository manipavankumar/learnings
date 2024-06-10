#include <stdio.h>

int evenOddFun(int num)
{
    if(num>0 && num%2==0)
        printf("%d is a positive even number",num );
    else if(num<0 && num%2 ==0)
        printf("%d is a neative even number",num);
    else if(num<0 && num%2 !=0)
        printf("%d is a neative odd number",num);
    else
        printf("%d is a positive odd number",num);
}

int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
   evenOddFun(num);
return 0;
}  