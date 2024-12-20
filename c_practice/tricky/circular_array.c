#include <stdio.h>

void cirucular(int arr[],int index)
{
    int tmp=0;
    for(int i=0; i<index;i++){
        tmp= arr[0];
        for(int j=0;j<10;j++)
        {
            arr[j] =arr[j+1];
        }
        arr[9] = tmp;
    }
}


int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int index = 3;

    cirucular(arr,index);

    for(int i=0;i<10;i++)
        printf("%d ", arr[i]);
} 