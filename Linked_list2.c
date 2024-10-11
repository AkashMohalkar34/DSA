#include<stdio.h>
struct node
{
    int data1;
    struct node * next;
};


int main()
{
    struct node *start;
    start = (struct node *)malloc(sizeof(struct node));
    start -> data1 = 126;
    start -> next  = (struct node*)malloc(sizeof(struct node));

    start -> next -> data1 = 127;
    start -> next -> next = (struct node*)malloc(sizeof(struct node));

     start -> next -> next -> data1 = 129;
    start -> next -> next -> next  = (struct node*)malloc(sizeof(struct node));
    
    
    /* Print  Data of Linked List Using while Loop*/
    struct node * p = start;
    while(p != 0)
    {
        printf("%d   ", p->data1);
        p = p -> next;
    }


    // printf("%d  ",start -> data1);
    // printf("%d  ",start -> next -> data1);
    // printf("%d  ",start -> next -> next -> data1);


}