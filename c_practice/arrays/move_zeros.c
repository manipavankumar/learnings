#include <stdio.h>

void swap(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}


void move_zeros(int list[])
{
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(list[i] ==0)
                swap(&list[i],&list[j]);
        }
    }
}

int main()
{
    int list[5]={1,0,2,0,4};

    move_zeros(list);

    for(int i=0;i<5;i++)
        printf("%d", list[i]);
}