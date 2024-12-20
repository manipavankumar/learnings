#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    char name2[20];
    printf("enter you name: ");
    gets(name);
    gets(name2);
  //  puts(name); // pavan and cursor goes to next line
    if(strcmp(name,name2) ==0 )
        printf("same ");
    else 
        printf("not");
}
/*op: pavan
      kumar c
*/     