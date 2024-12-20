#include <stdio.h>


int result;


int reverse_num(int num)
{
        while(num != 0){
        int remainder =num % 10; //getting last digit of the number

        result = result * 10 + remainder;
 
        num = num /10;  //deleting last digit of the number
    }
 return result;
}


int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);

    printf("\nreslut :%d",reverse_num(num));
}