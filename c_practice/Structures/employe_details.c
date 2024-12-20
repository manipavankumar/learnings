#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int empid;
    double salary;
} employee;

employee *details(employee *employe)
{
    char name[10];
    static int num=1;
    printf("enter employee %d name: ",num);
    scanf("%s",name);
    printf("enter the employee %d id: ",num);
    scanf("%d",&employe->empid);
    printf("enter the employee %d salary: ",num);
    scanf("%lf",&employe->salary);
    num++;
    return employe;
}
void display(employee *emp)
{   
    printf("%d\n",emp->empid);
    printf("%.2f\n",emp->salary);
}
int main()
{
    
    employee *emp[3];
    for(int i=0;i<3;i++){
        emp[i]=(employee*)malloc(sizeof(employee));

        details(emp[i]);
        display(emp[i]);
    }
    
    for(int i=0;i<3;i++)
        free(emp[i]);
return 0; 
}