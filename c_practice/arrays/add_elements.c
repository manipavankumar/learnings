#include <stdio.h>

int main()
{
    int a[]={1,12,3,3},res=0,len;
    len= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
        res += a[i];
    } 
    printf("%d\n",res);
return 0;
}  