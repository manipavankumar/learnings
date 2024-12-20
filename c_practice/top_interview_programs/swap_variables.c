#include <stdio.h>
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("%d %d",*a,*b);
}

int main(){
    int a=20,b=10;
    
    swap(&a,&b);
}