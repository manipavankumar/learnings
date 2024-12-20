#include <stdio.h>


int main()
{
    int arr[100],frq[100];
    int i,j,n,ctr;

    printf("enter the length of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter the element %d :",i);
        scanf("%d",&arr[i]);
        frq[i]=-1;
    }

    for(i=0;i<n;i++){
        ctr=1;
        for(j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                ctr++;
                frq[j]=0;
            }
        }
        if(frq[i] !=0){
            frq[i]=ctr;
        }
    }

    for(i=0;i<n;i++)
    {
        if(frq[i]!=0)
            printf("%d element occurs %d times\n",arr[i],frq[i]);
    }
}