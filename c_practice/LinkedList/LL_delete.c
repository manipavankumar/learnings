#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
} typedef node;
node *first =NULL;


void LL_create(int a[],int n){
    int i;
    node* last,*t;
    
    first=(node*)malloc(sizeof(node));
    first->data=a[0];
    first->link =NULL;
    last=first;
    for(i=1;i<n;i++){
        t=(node*)malloc(sizeof(node)); //allocating space for every instance 't' 
        t->data=a[i];
        last->link=t;
        last=t;
    }
    
}

void display_LL(node *p){
    while(p != NULL){
        printf("%d ", p->data);
        p=p->link;
        }
}

int delete_node(node* first,int pos){
    node *p,*q;
    int del_value,i;
    if(pos==0){
        del_value = first->data;
        p=first;
        first= first->link;
        free(p);
        return del_value;
    }
    else{
        p=first;
        q=NULL;
        for(i=0;i<pos;i++){
            q=p;
            p=p->link;     
        }
        if(p){
            q->link =p->link;
            del_value =p->data;
            return del_value;
        }
    }



}
int main()
{
    int a[]={1,2,3,4,5};
    LL_create(a,5);
    int pos;
    printf("enter the position to delete\n");
    scanf("%d",&pos);
    printf("deleted value from link :%d\n",delete_node(first,pos));
    display_LL(first);
    return 0;
} 
