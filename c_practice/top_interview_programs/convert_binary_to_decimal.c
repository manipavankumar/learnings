#include <stdio.h>

int convert(int N)
{
    int a=1;
    int result=0;

    while(N!=0){
        int remainder =N%10; //Retrieves the least significant bit (last binary digit).
        result = result + remainder * a ; // Adds the value of the binary digit multiplied by its corresponding power of 2. 
                                           //E.g., if remainder = 1 and a = 1, then result = result + 1 * 1.
        N /= 10; //Removes the last binary digit
        a *= 2;  //Moves to the next higher power of 2
    }
    return result;
}



int main()
{
    int binary_num;

    printf("enter the binary number: ");
    scanf("%d",&binary_num);

    printf("\nresult: %d",convert(binary_num));
}