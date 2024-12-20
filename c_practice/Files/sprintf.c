#include<stdio.h>
#include<stdlib.h>


int main()
{
    char buffer[50];

    int num =10;

    sprintf(buffer,"the number is %d",num); //this might give uh trouble if the buffer doesnt have enough size to hold 
                                            //to overcome this issue we can go with snprintf()
    snprintf(buffer,50,"the number is %d",num);
    //gets(buffer);
    puts(buffer);
}