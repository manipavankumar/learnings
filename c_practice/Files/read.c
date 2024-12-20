#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    int ch;
    if((file =fopen("Mybio.txt","r"))==NULL){
        printf("Error in opening file");
        exit(1);
    }
    while((ch=fgetc(file) !=EOF)){
        putchar(ch);
    }
    fclose(file);

    return 0;
}