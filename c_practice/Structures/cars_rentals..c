#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int carid;
    char model[20];
    double rate_perday;
}car;


void orders(car *cars)
{
    cars = (car*)malloc(sizeof(car));
    int days;
    cars->rate_perday =10000.00;
    double total_price=0.00;
    static int val=1;
    printf("\nenter the car%d id \n     or             \nenter ctrl+c exit!",val);
    printf("\n: ");
    scanf("%d",&cars->carid);
    printf("\nenter the car%d model: ",val);
    scanf("%s",cars->model);
    printf("rental days : ");
    scanf("%d",&days);

    val++;

    for(int i =0;i<days;i++)
        total_price += cars->rate_perday;

    printf("total_price is %lf",total_price);
}

int main(void)
{
    car *cars[3];

    for(int i=0;i<3;i++)
    {
        cars[i] = (car*)malloc(sizeof(car));
        orders(cars[i]);
    }
        
}