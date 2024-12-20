#include <stdio.h>


int main(){
    int num,flag = 0;

    printf("enter the number: ");
    scanf("%d",&num);

    if(num ==0 || num == 1)
    {
        printf("\ninvalid number");
        return 0;
    }

    for(int i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            flag =1;
            break;
        }
    }

    if(flag ==0)
        printf("\n%d is a prime number",num);
    else
        printf("\n%d is not a prime number",num);
}