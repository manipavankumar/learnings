#include <stdio.h>

int main()
{
    int value =0X12345678;

     value = (value & 0x000000FF)<<24 |
             (value & 0x0000FF00)<<8  |
             (value & 0x00FF0000)>>8  |
             (value & 0xFF000000)>>24 ;

    printf("%x",value);

}   