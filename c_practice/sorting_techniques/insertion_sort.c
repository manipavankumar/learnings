#include <stdio.h>

void print(int arr[],int len)
{
    for(int i=0;i<len;i++)
        printf("%d",arr[i]);
}

void insertion_sort(int arr[],int length)
{
    int i,j,key;
    for(i=1;i<length;i++){
        j=i-1;
        key=arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;  //placing the key element at desired place
    }
}

int main()
{
    int arr[]={2,3,1,5,4},length;
    length =sizeof(arr)/sizeof(arr[0]); //finding length for looping purpose 
    printf("elements before sorting: ");
    print(arr,length); // calling print function to print all the elements in array before sorting.
    insertion_sort(arr,length);// calling insertion sort function 
    printf("\nelements after sorting: ");
    print(arr,length); // calling print function to print all the elements in array after sorting.
return 0;
}