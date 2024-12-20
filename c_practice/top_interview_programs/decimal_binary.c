#include<stdio.h>

void convert(int num){
    int binary[32]={0};
    int i=0;
    while(num!=0){
        binary[i]=num % 2;
        num =num/2;
        i++;
    }
    for(int i =31 ;i>=0;i--)
        printf("%d ",binary[i]);
}


int main()
{
    int num=49;

    convert(num);
}