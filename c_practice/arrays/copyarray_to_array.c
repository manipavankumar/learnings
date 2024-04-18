#include <stdio.h>

int main()
{
    int a[]={1,12,3,3},res=0,len;
    int b[10];
    len= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
        b[i]= a[i];
    }
    for(int i=0;i<len;i++){
    printf("%d\n",b[i]);
     } 
return 0;
} 