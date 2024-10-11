#include<stdio.h>
#include<stdlib.h>

struct node
  {
    int data; 
    struct node *next;
     
  } ;
struct node * start = 0;   // globally daclared 
struct node * creatnode()
{
    struct node *g;
   g = (struct node *)malloc(sizeof(struct node));
   printf("Enter Data.\n");
   scanf("%d",&g ->data);
   g -> next =0;
   return g;
}
       void InsertS()
        {
            struct node *k;
            k = creatnode();

            if(start == 0)
            {
                start = k;
            } 

            else
            {
                k -> next = start;
                start = k;
            }
        }
       void InsertE()
        {
            struct node * x1 , *g1;
            x1  = creatnode();
            if(start == 0)
            {
                start = x1;
            }
            else
            {
                g1 = start;
                while(g1 -> next != 0)
                {
                    g1 = g1 -> next;
                }
                g1 -> next = x1;
            }

        }
       void InsertM()
        {
            struct node *h1, *p1, *x1;
            int v; 
            x1 = creatnode();
            if(start ==  0)
            {
                start = x1;
            }
            else
            {
            printf("Enter where you want to store :");
            scanf("%d",&v);
            p1 = start ;
            while (p1 -> data != v)
            {
                p1 = p1 -> next;
            }
            h1 = p1 -> next;
            p1 -> next = x1;
            x1 -> next = h1;


            }

        }
      void DeleteS()
        {
             struct node * j;
            if(start == 0)
            {
                printf("there is no node to be dalate.");
            }
            else
            {
               
                j = start;
                start = start -> next;
                j -> next = 0;
                free(j); 
            }

        }
       void DeleteE()
        {
            struct node *j1 , *k1;

            if(start == 0)
            {
                printf("There is no node to be deleted");
            }
            else
            {
                k1 = start;
                while(k1 -> next -> next != 0)
                {
                    k1 = k1 -> next;
                //    k1 = k1 -> next;
                }

                j1 = k1 ->next;
                k1 -> next = 0;
                free(j1);


            }

        }
       void DeleteM()
        {
           int d;
           struct node *x , *y;
           if(start == 0)
           {
                      printf("There is no node to be deleted.");

           }

           else
           {
              printf("enter a data that to be deleted.");
              scanf("%d",&d);
                x = start ;
              while(x -> next -> data != 0)
              {
                x = x -> next;
              }
              y = x -> next;
              x -> next = y -> next;
              y -> next = 0;

            

           }
          }



        
       void Display()
        {
            struct node *d; 
            if(start == 0)
                 {
                      printf("There is no node to be display.");
                 }
             else
             {
                
                 d = start; 
                 while (d != 0)
                 {
                    printf("%d  ",d -> data);
                    d = d -> next;
                 }
             }    


        }

int main()
{
    int ch;
    printf("1.Insertion from Start.\n");
    printf("2.Insertion from End.\n");
    printf("3.Insertion from Middle.\n");
    printf("4.Delation from Start.\n");
    printf("5.Delation from End.\n");
    printf("6.Delation from Middle.\n");
    printf("7.Display.\n");
    printf("8.Exit.\n");

while(1)
{
    
    printf(" \n \n \n ENTER YOUR CHOICE :-\n");
    scanf("%d",&ch);

    switch (ch)
    {
        case 1:
          {
             InsertS();
                break;
           }   
    
        case 2:

          {
            InsertE();
              break;
          }
               

         case 3:
    {
        InsertM();
        break;

    }    
    case 4:
    {
        DeleteS();
        break;

    }    
    case 5:
    {
        DeleteE();
        break;
        
    }    
    case 6:
    {
        DeleteM();
        break;
        
    }   
     case 7:
    {
        Display();
        break;   
    } 
     case 8:
    {
        exit(0);
        
    }  

    default:
    {
        printf("Wrong Input.\n");
        break;
    }  
    }
  }
}