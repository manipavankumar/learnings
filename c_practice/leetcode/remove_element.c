#include <stdio.h>

int remove_element(int list[6],int val)
{
    int k=0;
    for(int i=0;i<6;i++)
    {
        if(list[i] != val)
        {
            list[k] = list[i];
            k++;
        }
    
    }
     for(int i=k;i<6;i++)
        list[i]=0;
    return k;
}


int main()
{
    int list[6]={1,2,3,3,4,5};
    int val=3;
    int res= remove_element(list,val);

    printf("%d\n",res);
    for(int i=0;i<6;i++)
        printf("%d ",list[i]);
}