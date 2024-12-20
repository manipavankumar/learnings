#include<stdio.h>

void sort(int list[],int len)
{
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++)
        {
            if(list[i]>list[j]){
                int tmp =list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }
}


int main()
{
    int list[]={4,6,3,2,8};
    int len = sizeof(list)/sizeof(list[0]);

    sort(list,len);
    //after sorting print second largest number
    printf("%d",list[len-2]);
}