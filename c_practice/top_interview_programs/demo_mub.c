#include <stdio.h>
#include <string.h>

int main()
{

    char arr[10][10]={"hello","welcome","mubarak","hello","welcome","mubarak","hello"};
    int frequency[10]={0};
    for(int i=0;i<10;i++){
        if(frequency[i] == 0){
        for(int j=0;j<10;j++){
            if(strcmp(arr[i],arr[j]) == 0){
                frequency[i]++;
            }
        }
        }
    }

    for(int i=0;i<10;i++){
        if(frequency[i]>0)
            printf("word %s appres at %d times\n",arr[i],frequency[i]);
    }
}

