#include<stdio.h>


void fun1(){
    printf("your are in function1");
}
void fun2(){
    printf("your are in function2");
}

int main(int argc,char *argv[])
{
    void (*operation)(void);
    char sel;
    if(argc !=2)
        printf("invalid arguments");
    sel = argv[1][0];

    switch(sel){
        case '1':
            operation=fun1;
            operation();
            break;
        case '2':
            operation=fun2;
            operation();
            break;
        default :
            printf("error");
    }


}