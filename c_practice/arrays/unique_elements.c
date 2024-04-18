#include <stdio.h>

int main()
{
    int a[]={1,2,3,6,6,7},len;
    len= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
       for(int j=i+1;j<len;j++){
        if(a[i]!=a[j]){
            printf("%d\n",a[i]);
            break;
         } 
       }       
    }
return 0;
}