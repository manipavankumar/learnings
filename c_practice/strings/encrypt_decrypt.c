/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define LEN 10

char buffer[LEN];

void decrypt(char pass[])
{
  
    for(int i=0;i<LEN-1;i++){
        buffer[i]=pass[i]-2;
    }
}

void encrypt(char pass[])
{
    for(int i=0;i<LEN-1;i++){
        buffer[i]=pass[i]+2;
    }
}

int main()
{
    char pass[LEN]="Pavan";
    
    printf("entered password: ");
    puts(pass);
    printf("encrypted password: ");
    encrypt(pass);
    puts(buffer);
    printf("decrypted password: ");
    decrypt(buffer);
    puts(buffer);
    return 0;
}
