#include <stdio.h>

int main(){
    int year;
    printf("Enter the year to find leapyear or not: ");
    scanf("%d",&year);
    
    if(year%4==0 || year %100==0 || year%100 ==0)
        printf("leap year");
    else
        printf("not lep year");
}