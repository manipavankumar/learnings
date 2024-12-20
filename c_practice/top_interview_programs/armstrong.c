#include <stdio.h>

int main(){
    int val;
    printf("enter the  length of value:");
    scanf("%d",&val);
    int check= val;
    int res=0;
   while(val !=0){
        int N =val%10;
        res = res+ (N*N*N);
        val /= 10;
    }
    if(check ==res)
        printf("%d is a armstrong number",res);
    else{
        printf("enterd number is not armstrong number");
    }
}