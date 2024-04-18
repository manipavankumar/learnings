#include <stdio.h>

int main()
{
    int a[]={1,1,3,3,6,6,},count=0,len;
    int b[10];
    len= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
       for(int j=i+1;j<len;j++){
        if(a[i]==a[j]){ 
            count++;
            break;
        }
       }
    }
    printf("%d duplicates",count);
return 0; 
}