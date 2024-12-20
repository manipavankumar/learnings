#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}node;

node *head =NULL;

void display_LL(node *p){
    while(p != NULL){
        printf("%d->", p->data);
        p=p->link;
    }
}
void create_LL(){
    node *last,*first,*second;
    head=(node *)malloc(sizeof(node));
    head->data =1;
    head->link =NULL;
    last =head;
    
    first =(node *)malloc(sizeof(node));
    first->data =2;
    first->link =NULL;
    last->link =first;
    last =first;
    
    second =(node *)malloc(sizeof(node));
    second->data =3;
    second->link =NULL;
    last->link =second;
    last =second;  
}

int main(){
    
    create_LL();
    display_LL(head);
}