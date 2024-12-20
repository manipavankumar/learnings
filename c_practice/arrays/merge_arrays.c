#include <stdio.h>

void swap(int *a,int *b)
{
    int tmp =*a;
         *a = *b;
         *b = tmp;
}

int main()
{
    int a[]={1,2,3};
    int b[]={1,2,3};

    int size =sizeof(a)/sizeof(a[0]);
    int res[size*2];

    for(int i=0; i<size; i++){
        res[i] =a[i];
        for(int j=0;j<size ;j++)
            res[size+j] =b[j];
    }

    for(int i=0;i<size*2;i++)
    {
        for(int j=0;j<size*2;j++){
            if(res[i]<res[j])
                swap(&res[i],&res[j]);
        }
    }

    for(int i=(size*2-1); i>=0 ;i--)
        printf("%d ",res[i]);
}