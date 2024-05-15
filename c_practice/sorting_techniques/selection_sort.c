#include <stdio.h>
void display(int A[],int len)
{
    for(int i=0;i<len;i++)
        printf("%d ",A[i]);
}

void swap(int *i,int *k){
    int temp=*i;
    *i=*k;
    *k=temp;
}

void selection_sort(int A[],int len){
    int i,j,k;
    for(i=0;i<len;i++)
    {
        for(j=k=i;j<len;j++){  //note here we are increminting only j Not K
            if(A[j]<A[k])
                k=j; //here we are bringing k at j's place i,e. j and k has same position.
        }
        swap(&A[i],&A[k]);
    }
}
int main()
{
    int A[]={2,3,1,5,4};
    int len=sizeof(A)/sizeof(A[0]);
    printf("elements before sorting: \n");
    display(A,len);
    selection_sort(A,len);
    printf("\nelements after sorting: \n");
    display(A,len);
return 0;
}