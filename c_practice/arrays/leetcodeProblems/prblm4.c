/*There is a programming language with only four operations and one variable X:

++X and X++ increments the value of the variable X by 1.
--X and X-- decrements the value of the variable X by 1.
Initially, the value of X is 0.

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.
Example 1:

Input: operations = ["--X","X++","X++"]
Output: 1
Explanation: The operations are performed as follows:
Initially, X = 0.
--X: X is decremented by 1, X =  0 - 1 = -1.
X++: X is incremented by 1, X = -1 + 1 =  0.
X++: X is incremented by 1, X =  0 + 1 =  1.
*/


/*
logic: we can observe the index 1 is indicating that - or + operation which we need for comparistion
-|-|x 
x|-|-
+|+|x
x|+|+

*/
#include <stdio.h>

int finalvalue(char **operation,int size)
{
    int value =0;
    for(int i=0;i<size;i++){
        if(operation[i][1]== '+')
            value++;
        else if(operation[i][1]== '-')
            value--;
          
    }
    return value;
}


int main()
{
    char *operations[]= {"++x","--x","x++","x++"};
    int operationSize = sizeof(operations)/sizeof(operations[0]);
    int final =finalvalue(operations,operationSize);
    printf("%d",final);
}
