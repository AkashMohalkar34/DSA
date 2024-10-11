#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
    struct node * prev;
};
struct node * start = NULL;
struct node * cn()
{
    struct node * p1;
    p1 = (struct node*)malloc(sizeof(struct node));
    printf("Enter A Data :");
    scanf("%d",&p1 -> data);
    p1 -> next = NULL;
    p1 -> prev = NULL;

    return p1;
}

void IntS()
{
    struct node * f1 ;
    f1 = cn();
    if(start == NULL)
    {
        start = f1;
    }
    else
    {
        f1 -> next = start;
        start -> prev = f1;
        start = f1;
        
    }

}
void IntE()
{

}
void IntM()
{

}
void DelS()
{

}
void DelE()
{

}
void DelM()
{

}
void display()
{
    struct node * v1;
    v1 = start;
    if(start == NULL)
    {
        printf("There is no any node  to be Display");
    }
    else{
        
        while(v1 != NULL)
        {
            printf("%d   ",v1 -> data);
            v1 = v1 -> next;
        }

    }

}
int main()
{
    
    printf("\n 1. Insertion From start");
    printf("\n 2. Insertion From End");
    printf("\n 3. Insertion From Middle");  
    printf("\n 4. Delation From start");
    printf("\n 5. Deletion From End");
    printf("\n 6. Deletion From Middle");
    printf("\n 7.Display");
    printf("\n 8.Exit");
  int ch;
   while(1)
   {
     printf(" \n Enter your Choice : \n");
     scanf("%d",&ch);

     switch(ch)
     {
        case 1:
        {
            IntS();
            break;

        }case 2:
        {
            IntE();
            break;    
        }
        case 3:
        {
            IntM();
            break;
            
        }
        case 4:
        {
            DelS();
            break;
            
        }
        case 5:
        {
            DelE();
            break;
            
        }
        case 6:
        {
            DelM();
            break;
            
        }
        case 7:
        {
          display();
          break;  
        }
        case 8:
        {
           exit(0);
           break; 
        }
        default :
        {
            printf("wrong Input ...");
        }
     }
}  

}