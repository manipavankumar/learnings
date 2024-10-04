#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#define MAX_TASK_NAME_LENGTH 100
#define MAX_TASKS 100

//Define the structure to store task details 
struct task{
    char name[MAX_TASK_NAME_LENGTH];
    int iscomplete;
};

//define array to store tasks

struct task tasks[MAX_TASKS];
int task_count =0;

void add_Task()
{
    if(task_count >= MAX_TASKS)
        printf("task list is FULL");
    
    struct task new_task;
    printf("Enter the task name: \n");
    getchar();
    fgets(new_task.name,MAX_TASK_NAME_LENGTH,stdin);
    new_task.name[strcspn(new_task.name,"\n")]=0;
    new_task.iscomplete=0;

    tasks[task_count++]=new_task;

    printf("Task added successfully!\n");
}

void display_List()
{
    if(task_count == 0)
        printf("list is empty");
    
    printf("ID\t\tTask\t\tStatus\n");
    printf("----------------------------------------\n");
    for(int i =0;i<task_count;i++){
         printf("%d\t\t%s\t\t%s\n",i+1,tasks[i].name,tasks[i].iscomplete?"complete":"incomplete");
    }
}

void mark_Complete()
{
    int task_id;
    printf("\nenter task ID to mark complete: ");
    scanf("%d",&task_id);
    if(task_id<0 || task_id>task_count)
    {
        printf("Invalid task ID\n");
        return;
    }
    tasks[task_id-1].iscomplete =1;
    printf("\n Task marked as completed!");

}

void del_Task()
{
        int task_id;
        printf("enter task 'ID' to delete!\n");
        scanf("%d",&task_id);
        if(task_id <1 || task_id> MAX_TASKS)
        {
            printf("Invalid tas ID\n");
            return;
        }
        for(int i=task_id-1;i<task_count-1;i++)
        {
            tasks[i]= tasks[i+1];
        } 
        task_count--;
        
        printf("\n Task has been deleted successfully!!\n");
}


int main()
{
    int choice;
    while(1){
        printf("\nTodo list Application");
        printf("\n1. Add Task");
        printf("\n2. Display Task");
        printf("\n3. Mark as Task complete");
        printf("\n4. Delete Task");
        printf("\n5. Exit\n");
        
        printf("\nenter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                add_Task();
                break;
            case 2:
                display_List();
                break;
            case 3:
                mark_Complete();
                break;
            case 4:
                del_Task();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice.\n")

        }

    }
return 0;
}