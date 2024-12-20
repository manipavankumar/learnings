#include<stdio.h>

void sort(int list[5])
{
    int tmp=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++){
            if(list[i]>list[j])
            {
                tmp=list[i];
                list[i]=list[j];
                list[j]=tmp;
            }
        }
    }
}

void pair(int list[5],int key){
    int flag =0;
    for(int i =0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if((list[i] + list[j]) == key){
                printf("\n%d and %d",i,j);
                flag =1;
            }
            else if(list[i] == key){
                printf("\n%d",i);
                flag =1;
                break;
            }
        }
    }
    if(!flag)
        printf("\nnot found");
}

int main()
{
    int list[5]={11,23,2,20,10};
    sort(list);

    for(int i=0;i<5;i++)
        printf("%d ",list[i]);

    pair(list,34);
    
}