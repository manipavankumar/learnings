#include<stdio.h>
#include<stdlib.h>



int main()
{
    FILE *fp = fopen("output.txt", "w");
    if (fp != NULL) {
    int num = 10;
    fprintf(fp, "The number is: %d\n", num);
    fclose(fp);
    }

}