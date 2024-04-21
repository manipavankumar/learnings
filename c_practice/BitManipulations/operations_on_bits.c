#include <stdio.h>
#include <stdbool.h>

//function prototypes
int bit_operation(int bit);
void find_even_odd(int bit);
void call_powerof2_fun(int bit);
void toggle_bit(int *bit,int pos);



int bit_operation(int bit)
{
    int choice,position,mask;
    printf("choice the operation:\nenter 1 for set a bit\nenter 2 for clear a bit\nenter 3 for toggle a bit\n");
    scanf("%d",&choice);
    printf("enter the position to manipulate");
    scanf("%d",&position);
    switch(choice){
        case 1:
            mask = 1<<(position-1);
            return mask | bit;
            break;
        case 2:
            mask =1 <<(position -1);
            return mask ^ bit;
            break;
        case 3:
            mask =1 <<(position -1);
            bit ^= mask;
            return bit;
            break;
        default:
            printf("select the correct choice");
            break;
    }
}
void find_even_odd(int bit)
{
    int choice;
    printf("enter choice:\n1 for operation using division\n2 for using AND operation\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        if(bit%2 == 1)
            printf("entered number is odd");
        else
            printf("entered number is even");
        break;
    case 2:
        if(bit & 1)
            printf("entered number is odd");
        else
            printf("entered number is even");
        break;
    }
}

bool power_of_2(int bit)
{
    int mask = bit-1;
    return !(mask &bit); 
}

void call_powerof2_fun(int bit)
{
if(power_of_2(bit))
        printf("%d is power of 2",bit);
    else
        printf("%d is not power of 2",bit);
}

void toggle_bit(int *bit,int pos)
{
    int mask = 1<<(pos-1);
    *bit ^= mask;
}

int main(){
    int bit;
    printf("enter the number: \n");
    scanf("%d",&bit);
    int result = bit_operation(bit);
    printf("%d",result);
    //find_even_odd(bit); //find even or odd
    //call_powerof2_fun(bit);
    //toggle_bit(&bit,3); printf("%d",bit); //toggling a bit using pointer

    
return 0;
}