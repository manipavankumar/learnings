#include <stdio.h>

int main()
{
    int a[]={1,2,3,5};
    int j=0;
    for(int i=1;i<5;i++,j++){
        if(a[j] != i){
            printf("%d ",i);
        }
    }
  
}