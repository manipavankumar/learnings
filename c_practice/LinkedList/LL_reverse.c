#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node *next;
}typedef node;


void push(node **head_ref,int data)
{
    node *new_data =(node*)malloc(sizeof(node));

    new_data->data=data;
    new_data->next =(*head_ref);
    (*head_ref)=new_data;
}

void display(node *head){
    node *temp=head;
    while(temp !=NULL){
        printf("%d-",temp->data);
        temp=temp->next;
    }
}



int main()
{
    node *head =NULL;
    int data[3]={1,2,3};
    printf("enter a element to push\n :");
    for(int i=0;i<3;i++)
    {
        push(&head,data[i]);
    }

    display(head);
}