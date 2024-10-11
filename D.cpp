#include<stdio.h>
#include<stdlib.h>


struct node
{
   int data;
   struct node *prev;
   struct node *next;

};

struct node * start = NULL;
struct node * cn()
{
    struct node * p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter a  Data");
    scanf("%d",&p1 -> data);
     p1 -> next = NULL;
    p1 -> prev = NULL;
   

}

void Is()
   {
     struct node * f1;
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
void Ie()
   {

   }
void Im()
   {

   }
void Ds()
    {
    	struct node * k1;
    	if(start == NULL)
    	{
    		printf("There is no any node to be delete");
		}
		else
		{
			k1 = start;
		  start	= start -> next;
		  start -> prev = NULL;
		  k1 -> next = NULL;
		  free(k1); 
			
		}

    }
void  De()
     {

    }
void  Dm()
    {

    }
void display()
    {
        struct node * v1;
       
        if(start == NULL)
        {   
            printf("There is no node to be display");
        }
        else
        {
            v1 = start;
            while(v1 != NULL)
            {
                printf("%d  ",v1->data);
                v1 = v1 -> next;
            }
        }
    }
    int main()
{
    int ch;
    printf("\n 1. Insertion form Start ");
    printf("\n 2. Insertion form End ");
    printf("\n 3. Insertion form Middle ");
    printf("\n 4. Delation form Start ");
    printf("\n 5. Delation form End ");
    printf("\n 6. Delation form Middle ");
    printf("\n 7.Display");
    printf("Exit");

while(1)
{
     printf(" \nEnter Your Choice");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        {
            Is();
            break;
        }
        case 2:
        {
            Ie();
            break;

        }
        case 3:
        {
            Im();
             
            break;
        }
        case 4:
        {
           
            Ds();
             break;
        }
        case 5:
        {
            De();
             break;
        }
        case 6:
        {
            Dm();
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
        }
        default:
        {
            printf("Wrong input");
            break;
        }
    }
}
   
}
