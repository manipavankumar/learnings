#include <stdio.h>

int main()
{
    int row=2,column=2;
    int array_2d[row][column];
    int values =0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            array_2d[i][j] =values++;
            printf("\n%d",array_2d[i][j]);
        }
    }
return 0;
}