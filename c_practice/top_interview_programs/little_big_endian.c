#include <stdio.h>

/*
int main()
{
    unsigned int x = 0x8765432;

    char *c =(char *) &x;  //c is a pointer to a char (which is 1 byte in size). It is assigned the address of x, but cast to a char*.
                          //By doing this, the program accesses the individual bytes of x, starting from the least significant byte, since char* accesses memory 1 byte at a time.

    printf("*c is 0x%x\n",*(c));

    if(*c == 0x32)
        printf("system architecture is little endian");
    else
        printf("system architecture is big endian"); 
}

*/

/* method 2 USING union*/

union 
{
        unsigned int i;
        unsigned char c[4];/*Even though you did not explicitly store any values into the array c, you're using a union.
                             In C, a union is a special data structure where all members share the same memory location. 
                             This means that when you assign a value to the unsigned int i field of the union, that value 
                            is automatically stored in the same memory location as the array unsigned char c[4].*/
}check_endian;

int main()
{
    check_endian.i= 0x01020304;
  
    if(check_endian.c[0] == 0x04)
        printf("system architecture is following little-endian");
    else    
        printf("system architecture is following big-endian");
}
