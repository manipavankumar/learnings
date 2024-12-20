#include <stdio.h>


void reverse(char *name)
{
    char tmp;
    int length=0,i;
    while(name[length] != '\0') length++;

    for(i =0;i<length/2;i++)
    {
        tmp =name[i];
        name[i] = name[length-i-1];
        name[length -i-1] = tmp; 
    }
    puts(name);


}

int main()
{
    char name[]="pavan";

    reverse(name);
}