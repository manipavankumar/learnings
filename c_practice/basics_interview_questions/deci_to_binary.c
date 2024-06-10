#include <stdio.h>
#include <stdlib.h>

int * deci_to_binary(int num)
{
   int i=0;
   int *binary= (int *)malloc(32 * sizeof(int));
    while(num>0)
    {
        binary[i] = num%2;  //remainder which gives you either 0 or 1;
            num = num/2;   //divides the number by 2 
            i++;
    }
    return binary;
    free(binary);
}

void display(int binary[],int len)
{
    for(int i =(len-1);i>=0;i--)
        printf("%d",binary[i]);
}

//driver code
int main(){
    int num;
    printf("enter the decimal value :");
    scanf("%d",&num);
    int *binaryvalue = (int *)malloc(32 * sizeof(int));
    binaryvalue =deci_to_binary(num); 
    display(binaryvalue,4);
    
    free(binaryvalue);
return 0;  
}