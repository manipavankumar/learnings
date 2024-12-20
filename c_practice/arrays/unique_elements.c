#include <stdio.h>


int isunique(int a[],int len)
{
    int unique_index=0;
    for(int i=0;i<len;i++)
    {
        if(a[unique_index] != a[i])
        {
            unique_index++;
            a[unique_index]=a[i];
        }
    }
    return unique_index+1;
}
int main() {
    
    int a[]={1,2,3,3,4,5,6,6};
    int len =sizeof(a)/sizeof(a[0]);
    int n =isunique(a,len);
    printf("unique elements are :");

    for(int i=0;i<n;i++)
        printf("\n%d",a[i]);
    return 0;
}