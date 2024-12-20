#include <stdio.h>
#include <string.h>

int main()
{

    char* str="hello world pavan";
    char str1[100];
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=' '){
                str1[i]= str[i];
        }
       printf("%s",str1);
    }
    


}
