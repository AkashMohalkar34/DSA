#include<stdio.h>

struct node{
    int data1; 
    float data2;
    int *ptr;
};
void main()
{
    struct node *k;
    k =(struct node *) malloc(sizeof(struct node));
    k ->data1=10;
    k ->data2= 23.34;
 
   /*pointer ke andar pointer */
   k -> ptr = (int*)malloc(sizeof(int));

   *(k -> ptr) = 55;

    printf("%d    %f    %d ",k ->data1,k ->data2 , *(k -> ptr));
    
}