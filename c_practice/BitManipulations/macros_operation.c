#include <stdio.h>

#define GETABIT(num,pos)  num = (num>>pos) & 1
#define SETABIT(num,pos)  num = (1<<pos) | num
#define CLEARABIT(num,pos)  num = ~(1<<pos) & num
#define TOGGLEABIT(num,pos)  num = (1<<pos) ^ num


int main(void)
{
        int num =10,pos_bit;
    printf("enter the position bit : ");
    scanf("%d",&pos_bit);
    printf("\nenter\n1 to get a bit\n2 for set a bit\n3 for clear a bit\n4 for toggle a bit\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("%d",GETABIT(num,pos_bit));
            break;
        case 2:
            printf("%d",SETABIT(num,pos_bit));
            break;
        case 3:
            printf("%d",CLEARABIT(num,pos_bit));
            break;
        case 4:
            printf("%d",TOGGLEABIT(num,pos_bit));
            break;
        default:
            printf("choose a correct choice");
    }

return 0;
}