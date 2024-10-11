#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int top;
    int cap;
    int *arr;
};

int isfull(struct Stack *s1)
{
    if(s1 -> top ==s1 -> cap - 1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct Stack *s1)
{
    if(s1 -> top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct Stack *s1)
{
    if(!isfull(s1))
    {
        s1 -> top ++;
        printf("Enter a data :");
        scanf("%d",s1 -> arr[s1 -> top]);

    }
    else{
        printf("Stack is full");
    }
}

void pop(struct Stack * s1)
{
  //  int d;
    if(!isEmpty(s1))
    {
       // d = s1 -> arr[s1 -> top];
        s1 -> top--;
      //  printf("poped Element is : %d ",d);
        
    }
    else{
        printf("Stack is empty");
    }
}

void display(struct Stack *s1)
{ printf("arrray element is :");
    for(int i = 0 ; i < sizeof(s1 -> arr[s1 ->top]);i++)
    {
       
        printf("%d ",s1 -> arr[s1 ->top]);
    }
}
int main(){
    int s,ch;
  struct Stack * s1;
  printf("Enter the size of the stack .");
  scanf("%d",&s);
  s1 = (struct Stack *) malloc(sizeof(struct Stack));
  s1 -> top = -1;
  s1 -> cap = s;
  s1 -> arr = (struct Stack *)calloc(s,sizeof(int));
  printf("\n 1. push ");
  printf("\n 2. pop");
  printf("\n 3. Exit ");
  printf("\n 4. display");
  while(1)
  {
    printf("\n \n Enter the choice : \n ");
    scanf("%d",&ch);

    switch(ch){
        case 1 :{
            push(s1);
            break;
        }
        case 2:
        {
            pop(s1);
            break;
        }
        case 3:
        {
            exit(0);
        }
        case 4:
        {
            display(s1);
            break;
        }
        default:
        {
            printf("Wrong input ");
        }
    }

  }

}