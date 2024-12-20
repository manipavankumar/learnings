// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}node;

node* head = NULL;


void display()
{
    node*p = head;
    while(p != NULL){
        printf("%d ",p->data);
        p = p->link;
    }
}

void reverse_LL()
{
    node *current = (node*)malloc(sizeof(node));
    node *next = (node*)malloc(sizeof(node));
    node *prev = (node*)malloc(sizeof(node));
    current = head;
    next = NULL;
    prev = NULL;
    while(current != NULL)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    head = prev;
    
}
void create_LL(int a[],int len)
{
    node* last, *t;
    
    head = (node *)malloc(sizeof(node));
    head->data = a[0];
    head->link = NULL;
    last = head;
    
    for(int i=1;i<len;i++){
        t=(node*)malloc(sizeof(node));
        t->data = a[i];
        t->link = NULL;
        last->link = t;
        last = t;
    }
}


int main() {
    int a[]={1,2,3,4,5};
    int len =sizeof(a)/sizeof(a[0]);
    
    create_LL(a,len);
    printf("original list : ");
    display();
    printf("\n");
    reverse_LL();
    printf("reversal list : ");
    display();
    return 0;
}