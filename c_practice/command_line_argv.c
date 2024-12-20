#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    if(argc !=4){
        printf("usage: num <operator> num");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char operator = argv[2][0];

    switch(operator)
    {
        case '+':
            printf("\noutput: %d",num1+num2);
            break;
        case '-':
            printf("\noutput: %d",num1-num2);
            break;
        case '*':
            printf("\noutput: %d",num1*num2);
            break;
        case '/':
            printf("\noutput: %d",num1/num2);
            break;
        default :
            printf("error");
            break;
    }
    
return 0;   
}