#include <stdio.h>

void convert_binary(int *num,int binary[])
{
    //note** //intialize zeros first //then overwrite 
    for(int i=0;i<32;i++){
        binary[i]=0;
    }
    int i=0;
    while(*num>0)
    {
        binary[i]=*num%2;
        *num=*num/2;
        i++;
    }
}

void display(int binary[])
{   int i=31;
    while(i>=0)
    {
        printf("%d",binary[i]);
        i--;
    }
}

int main(void)
{
    int num;
    int binary[32];
    printf("enter the decimal number: ");
    scanf("%d",&num);
    printf("\nbinary representation: ");
    convert_binary(&num,binary);
    display(binary);

}
