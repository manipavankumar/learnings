#include <stdio.h>

void removeDup(int list[],int len){
    int newlist[len];
   for(int i=0;i<len;i++){
        for(int j =i+1;j<=len;j++){
            if(list[i] != list[j]){
                newlist[i]=list[i];
                break;
            }
            else{
                break;
            }
        }
    }
    for(int i =0;i<len;i++)
        printf("%d ",newlist[i]);
}


int main()
{
    int list[]={1,2,2,3,3,4,5,6,7}; 
    int len= sizeof(list) / sizeof(list[0]);
    removeDup(list,len); 
return 0;
}
