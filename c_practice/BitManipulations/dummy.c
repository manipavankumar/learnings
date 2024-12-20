#include <stdio.h>

void count_set_bits(int data)
{
    int i = 0,count=0,unset = 32;
    while(data != 0){
        if(data & 1)
            count++;
        data >>= 1;
        i++;
    }
    unset = unset - count;
    printf("%d",unset);
}

int main() {
    
    int data = 17;
    count_set_bits(data);

    return 0;
}