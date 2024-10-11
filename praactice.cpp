#include<stdio.h>
#include<stdlib.h>
struct node 
{
	struct node *next;

	int data;

};
struct node * start  = 0;
struct node * Cn()
{
	struct node *d1;
	d1 = (struct node *)malloc(sizeof(struct node));
	printf("Enter the Data :");
	scanf("%d",&d1 -> data);

	d1 -> next = 0;
	return d1;


}
void insertionS()
{
	struct node *k;
	k = Cn();
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
void insertionE()
{
	struct node * x1, g1;
		g1 = start;
	x1 = Cn();
	if(start == 0)
	{
	    start = x1;
	}
	else
	{
	
		while(g1 -> next != 0)
		{
			g1 = g1 ->next;
		}
		g1 -> next = x1;

	}
}

void insertionM()
{
	struct node *h1,*p1,*x1;
	x1 = Cn();
	int v;
	printf("Enter where you want to Store :");
	scanf("%d",&v);

	if(start == 0)
	{
		start = x1;

	}
	else
	{
		p1 =start;
		while(p1 -> data != v)
		{
			p1 = p1 -> next;
		}
		h1 = p1 -> next;
		p1 -> next = x1;
		x1 -> next = h1;
	}

}

void deletionS()
{
	struct node * j;
   if(start == 0)
   {
   printf("Element are Not in the Node .");
   }
   else
   {
	  j =start;
	  start = start -> next;
	  j -> next = 0;
	  free(j);
   }
}

void deletionE()
{
	struct node *k1,*j1;
	if(start == 0)
	{
		printf("no node to be Delation .");
	}
	else{
		k1 = start;
		while(k1 -> next -> next != 0)
		{
			j1 = k1 -> next;
            k1 -> next = 0;
			free(j1);
		}
	}
}
void deletionM()
{
	
}

void display()
{
	struct node * d;
	d =start;
	if(start == 0)
	{
		printf("No node to be Display.");
	}
	else
	{
		while(d != 0)
		printf("%d",d -> data);

	}

}


int main()
{
	int ch;
	printf("\n1. Insertion from the S");
	printf("\n2. Insertion from the E");
	printf("\n3. Insertion from the M");
	printf("\n4. Deletion from the S");
	printf("\n5. Deletion from the E");
	printf("\n6. Deletion from the E");
	printf("\n7. Display");
    printf("\n8.Exit");

while(1)
{
	printf("Enter Choice :\n");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
		{
			insertionS();
			break;

		}
	case 2:
		{
				insertionE();
		    	break;
		}

		case 3:
		{	insertionM();
			break;
			
		}

		case 4:
		{
			deletionS();
		    break;
			
		}

		case 5:
		{
			deletionE();
		    break;
			
		}

		case 6:
		{
			deletionM();
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
			printf("wrong input..");
		 }

	}

}

	return 0;

}