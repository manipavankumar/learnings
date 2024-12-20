#include<stdio.h>

int facto(int val)
{
    
    int fact=1;
    for(int i=2;i<=val;i++)
    {
        fact=fact*i;
    }
    return fact;
}
//without using third variable
int factoo(int val)
{
    for(int i=val-1;i>=2;i--){
        val = val *i;
    }
    return val;
}

//using recursion
int fact_recursion(int val)
{
    if(val == 0){
       return 1;
    }
    return val* (fact_recursion(val-1));
}

int main()
{
    int val=5;
    printf("%d",factoo(val));
return 0;
}