#include<stdio.h>
#define SIZE 5

int search(int *p,int *key)
{
    int index=0;
    int *list_end =p+SIZE-1;

    while(p <= list_end && *p!= *key){ 
        p++;
        index++;
    }

    if(index)
        return index;
    
    return -1;
}

void display(int *p)
{
    for(int i=0;i<SIZE;i++){
        printf("%d ",*(p+i));
    }
}
int main()
{

    int list[SIZE],key;
    printf("enter 5 elements:\n");
    for(int i=0;i<SIZE;i++)
        scanf("%d",&list[i]);
    display(list);
    printf("\nenter key element to found its index position: ");
    scanf("%d",&key);

    int found = search(list,&key);
    
    if(found != -1)
        printf("\nfound the key's position :%d",found);
    else
        printf("not found");
   

return 0; 
}