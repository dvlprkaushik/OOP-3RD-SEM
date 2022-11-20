#include<stdio.h>
#include<stdlib.h>

struct Node
{
    /* data */
    struct Node *prev;
    int data;
    struct Node *next;
    /* data */
};


int main(){

    struct Node*Node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node*Node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node*Node3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node*Node4 = (struct Node*)malloc(sizeof(struct Node));
    
    Node1->prev=Node4;
    Node1->data=32;
    Node1->next=Node2;

    Node2->prev=Node1;
    Node2->data=64;
    Node2->next=Node3;

    Node3->prev=Node2;
    Node3->data=128;
    Node3->next=Node4;

    Node4->prev=Node3;
    Node4->data=256;
    Node4->next=Node1;

    printf("\nPrinting Node1 : %d " ,Node1->data);
    printf("\nPrinting Node2 : %d " ,Node2->data);
    printf("\nPrinting Node3 : %d " ,Node3->data);
    printf("\nPrinting Node4 : %d " ,Node4->data);
    
    
    return 0;

}
