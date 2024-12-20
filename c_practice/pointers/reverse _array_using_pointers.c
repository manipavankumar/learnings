
#include<stdio.h>
#define MAXSIZE 5

void swap(int *a,int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void reverse(int a[])  
{
    int *first=a;  //pointer to an array.
    int *last =a+ MAXSIZE-1; //pointing last index of an array(holding address of last vlaue in array)

    while(first < last){
        swap(first,last);
        
        first++;
        last--;
    }
}


void display(int a[])
{   
    for(int i=0;i<MAXSIZE;i++)
        printf("%d ",a[i]);
}

int main()
{
    int arr[MAXSIZE];
    
    printf("Enter 5 elements :\n");
    for(int i=0;i<MAXSIZE;i++)
        scanf("%d",&arr[i]);

    printf("\noriginal array:");
    display(arr);
    printf("\nreversed array:");
    reverse(arr);
    display(arr);


return 0; 
}