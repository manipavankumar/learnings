#include<stdio.h>


void copy_array(int *a,int *b)
{
    for(int i=0;i<4;i++){
        *b =*a; 
        a++;  // this will point to the next memory loaction of the next element in the array.
        b++;  // this will point to the next memory loaction of the next element in the array.
    }
}

void display(int *buff)
{
    for(int i=0;i<4;i++){
        printf("%d ",*buff);
    buff++;
    }
}

int main()
{

int a[4]={1,2,3,4};
int b[4];

copy_array(a,b);
display(b);

return 0; 
}