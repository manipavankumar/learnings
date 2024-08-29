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


int count_list(node *p){
    int c=0;
    while(p != NULL){
        c++;
        p=p->link;
        }
    return c;
}

int sum_list(node *p){
    int sum=0;
    while(p != NULL){
        sum += p->data;
        p=p->link;
        }
    return sum;
}

int max_In_list(node *p){
    int max=0;
    while(p != NULL){
        if(p->data>max)
            max=p->data;
            
        p=p->link;
        }
   return max;
}

int search_key(node *p,int key){
    while(p!=NULL){
        if(p->data ==key)
            return key;
        p=p->link;
    }    
    return -1;
}

int search_key_pos(node *p,int key){
    int pos=1;
    while(p!=NULL){
        if(p->data ==key)
            return pos;
        p=p->link;
        pos++;
    }    
    return -1;
}

void insert_at_benning(node *first){
    node* newnode=(node *)malloc(sizeof(node));
    newnode->data=0;
    newnode->link=first;
    first=newnode;
    display_LL(first);  
    
}

void insert_at_pos(node *first,int pos){
    node* newnode=(node *)malloc(sizeof(node));
    node* p=(node *)malloc(sizeof(node));   
    newnode->data=6;
    p=first;
    for(int i=0;i<pos-1;i++)
            p=p->link;
    newnode->link= p->link;
    p->link=newnode;
}

int main()
{
    int a[]={1,2,3,4,5};
    
    LL_create(a,5);
    
    /*
    if(search_key(first,3) != -1 )
            printf("\nfound the key %d",search_key(first,3));
        else
            printf("\nnot found the key");
     */ 
     
     /*
     if(search_key_pos(first,3) != -1 )
            printf("\nfound the key position %d",search_key_pos(first,3));
        else
            printf("\nnot found the key position");
     */

    //insert_at_benning(first);
    insert_at_pos(first,2);
     display_LL(first);
    return 0;
}
