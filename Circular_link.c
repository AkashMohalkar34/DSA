#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};
struct node * start = NULL;
struct node * cn()
{
    struct node * h;
    h = (struct node*)malloc(sizeof(struct node));
    printf("Enter A Data :");
    scanf("%d",&h -> data);
    h -> next = NULL;

    return h;
}

void IntS()
{
    struct node *p,*k;
    k = cn();
    if(start == NULL)
    {
        start = k;
    }
    else{
        if(start-> next == 0)
        {
            k -> next = start;
            start -> next = k;
            start = k;
        }
        else
        {
            p = start ;
            k -> next = start;
            while(p -> next != start)
            {
                p = p -> next;
            }
            p -> next = k;
            start = k;

        }
    }
}
void IntE()
{
    struct node * e1, * x1;
    e1 = cn();
    if(start == NULL){
        start =  e1;
    }
    else{
        if(start -> next == NULL){
            start -> next = e1;
            e1 -> next = start;
        }
        else{
            x1 = start;
            while(x1 -> next != start)
            {
                x1 = x1 -> next;
            }
            x1 -> next = e1;
            e1 -> next = start;
        }
    }
}
void IntM()
{
  int d;
  struct node * x ,*y , *k;
  x = cn();
  if(start == 0)
  {
    start = x;

  }
  else{
    printf("Enter a data where you want to insert ");
    scanf("%d",&d);
    k = start;
    while(x -> data != d)
    {
         x = x -> next; 
    }
    y = x -> next;
    x -> next = k;
    k -> next = y;
  }
}
void DelS()
{
   struct  node * p1 , * h1;
    if(start == 0)
    {
        printf("there is no node to be deleted in the linked list ");
    }
    else{
        p1 = start;
        start = start -> next;
        h1 = start;
        while(h1 -> next != p1)
        {
            h1 = h1 -> next;
        }
        h1 -> next = start;
        p1 -> next = NULL;
        free(p1);
    }
}
void DelE()
{
    struct node * h1, * h2;
    if(start == 0){
        printf("no node to be deleted in the circular linked list.");
    }
    else{
        h1 = start;
        while(h1 -> next -> next != start)
         {
             h1  = h1 -> next;
         }
         h2 = h1 -> next;
         h2 -> next = 0;
         h1 -> next = start;
         free(h2);
      }
}
void DelM()
{
   int d;
   struct node *x , *y;
   if(start == 0){
    printf("there is no node to be deleted in the linked list .");

   }
   else{
    printf("Enter the data thet you want to delete :");
    scanf("%d",&d);
    x = start;
    while(x -> next -> data != d)
  {
    x = x -> next;
  }
    y = x -> next;
    x -> next = y -> next;
    y -> next = 0;
    free(y);
     }

}
void display()
{
    struct node * u;
    if(start == 0)
    {
        printf("There is no node to be Display");
    }
    else
    {
        u = start;
        while(u -> next != start)
        {
            printf("%d  ",u->data);
            u = u -> next;
        }
        printf("%d  ",u -> data);
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