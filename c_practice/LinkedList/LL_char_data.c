#include <stdio.h>
#include <stdlib.h>
#define LEN 5

struct node{
    char data;
    struct node* link;
}typedef node;

node *head=NULL;

void display(struct node *p){
    while(p!= NULL){
        printf("%c",p->data);
        p=p->link;
    }
}

void create_LL(char name[])
{
    head = (node*)malloc(sizeof(node));
    node *last,*temp;
    
    head->data =name[0];
    head->link =NULL;
    last=head;
    
    for(int i=1;i<LEN;i++){
        temp = (node*)malloc(sizeof(node));
        temp->data =name[i];
        temp->link=NULL;
        last->link =temp;
        last =temp;
    } 
}


int main()
{
    char name[LEN];
    printf("Enter the letters of your name\n");
    for(int i=0;i<LEN;i++){
        scanf("  %c",&name[i]); //***note add space before %c to skip the any whitespace including newline, before reading next character
    }
    
        create_LL(name);

    
    display(head);

    return 0;
}