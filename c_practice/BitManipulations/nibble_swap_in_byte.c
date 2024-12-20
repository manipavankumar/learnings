#include <stdio.h>

int nibble_swap(int num)
{
    return (num&0x0f)<<4| (num & 0xf0)>>4 ;
}
int main()
{
    int num = 23; //0001 0111;
    int result= nibble_swap(num);

    printf("%d",result); //(113)0111 0001 
}