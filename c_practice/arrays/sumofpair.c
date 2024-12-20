#include<stdio.h>


void sort(int list[],int len)
{
    int tmp=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++){
            if(list[i]>list[j])
            {
                tmp=list[i];
                list[i]=list[j];
                list[j]=tmp;
            }
        }
    }
}


void sum_of_pair(int list[],int len, int key)
{
    int left =0;
    int right = len-1;

    while(left<right)
    {
        if(list[left]+list[right] <key)
            left++;
        else if(list[left]+list[right] >key)
            right--;
        else if(list[left] + list[right] == key){
            printf("\nposition of %d and %d\n",list[left],list[right]);
            left++;right--;
        }

        else
            printf("not found");
    }
}
int main()
{
    int list[]={1,8,6,4,3,5,7,9};
    int len =sizeof(list)/sizeof(list[0]);
    sort(list,len);
    for (int i=0;i<len;i++)
        printf("%d ",list[i]);
    
    int key=13;
    
   
    sum_of_pair(list,len,key);
}