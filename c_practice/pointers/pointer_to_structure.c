#include<stdio.h>
#include<stdlib.h>

/*struct student{
    int age;
    char *name;
};
typedef struct student student;
*/
 //      or          //


typedef struct student{
    int age;
    char *name;
} student;

student *fun(student* one_ref)
{
    one_ref->age = 23;
    one_ref->name = "pavan";
    return one_ref;
}

int main(void)
{
    student* one = (student*)malloc(sizeof(student));
    student* res = fun(one);

    printf("%d %s",res->age,res->name);
}
