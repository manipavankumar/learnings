#include<stdio.h>
#include<string.h>

char *arrversion(name[],surname[]);
int main(){

    char name[10],surname[5]; 

    gets(name);
    gets(surname);

    puts(strcat(name,surname)); //pavankumar
    puts(strcat(name,"kumar")); //pavankumar
    puts(strcat("pavan","kumar")); //error

    puts(arrversion(name,surname));//pavankumar
return 0;
}

char *arrversion(name[],surname[]){

    int i=0,j=0;

    while(name[i] !='\0'){
        i++;
    }

    while(name[i++] = surname[j++]);
    return name;
}