#include <stdio.h>

int remove_msb(int num)
{
    return (num-1)&num;
}

int main(void)
{
    int num=12;

    printf("%d",remove_msb(num));

}