#include<stdio.h>

int swap_adjaccent_bits(int num){
    int Even = num & 0xAA;    //0xAA gives setvalue at all odd position (10101010)
    int Odd = num & 0x55;     //0x55 gives setvalue at all even position (01010101)
    return Even>>1 | Odd<<1 ;
}


int main()
{
    int num= 0x9E;  //10011110
    int result=swap_adjaccent_bits(num);

    printf("%x",result); // 01101101(0x6D)
}