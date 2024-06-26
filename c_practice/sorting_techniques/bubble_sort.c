#include <stdio.h>


void print(int arr[],int len)
{
    for(int i=0;i<len;i++)
        printf("%d",arr[i]);
}

void swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

void BubbleSort(int arr[],int length)
{
    int i,j;
    for(i=0;i<length;i++){
        for(j=i+1;j<length;j++){
            if(arr[j]<arr[i]){ // comparing adjacent elements in array
            /*swapping the two adjacent elements*/
                swap(&arr[j],&arr[i]);
            }
        }
    }
}


int main()
{
    int arr[]={2,3,1,5,4},length;
    length =sizeof(arr)/sizeof(arr[0]); //finding length for looping purpose 
    printf("elements before sorting: ");
    print(arr,length); // calling print function to print all the elements in array before sorting.
    BubbleSort(arr,length);// calling bubble sort function 
    printf("\nelements after sorting: ");
    print(arr,length); // calling print function to print all the elements in array after sorting.
return 0;
}
