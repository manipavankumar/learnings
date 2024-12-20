#include <stdio.h>

void const_int_poiter()
{
    int a =10;
    int b =20;
    const int *ptr =&a;// ptr points to a
    ptr =&b;// Allowed: ptr now points to b

    *ptr = 30; //Error: cannot modify the value of b through ptr
    printf("%d",*ptr);
}

void Constant_Pointer_to_an_Integer()
{
    int a =10;
    int b =20;
   int *const ptr =&a;// ptr points to a
    ptr =&b;// not Allowed: cannot change the address ptr points to

    *ptr = 30; //allowed :modifies the value;
    printf("%d",*ptr);
}

void Constant_Pointer_to_a_Constant_Integer()
{
    int a =10;
    int b =20;

    const int *const ptr = &a;

    *ptr = 30; // Error: cannot modify the value of a through ptr
    ptr = &b;  // Error: cannot change the address ptr points to
}

int main()
{
    
}