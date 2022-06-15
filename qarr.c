#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
int isfull(int n)
{
	if(rear==n-1)
		return 1;
	else
		return 0;
}
	
int isempty(int n)
{
	if(front==rear)
		return 1;
	else
		return 0;
}
	
void enqueue(int val,int *q,int n)
{
	if(isfull(n))
		printf("\nQueue Full");
	else
	{
		if(front==-1)
			front=0;
		rear++;
		q[rear]=val;
		printf("%d inserted\n",q[rear]);
	}
}

void dequeue(int *q,int n)
{
	if(isempty(n))
		printf("\nQueue Empty\n");
	else
	{
		printf("%d deleted\n",q[rear]);
		q[rear]=-1;
		rear--;
	}
}


void display(int *q)
{
	int i,x;
	x=rear;
	for(i=0;i<=x;i++)
	{
		printf("| %d |\t",*(q+i));
	}
}

void main()
{
	int ch,val,n;
	printf("Enter number of data :");
	scanf("%d",&n);
	int q[n];
	while (1) 
	{
	printf("************************************\n");
	printf("\t1. Enqueue\n\t2. Dequeue\n\t3. Display\n\t4. Exit");
	printf("\n************************************\n");
	printf("Enter the choice :");
	scanf("%d",&ch);
	switch(ch)
	{
			case 1 :
				{
					printf("\nEnter value to be inserted :");
					scanf("%d",&val);
					enqueue(val,q,n);
					printf("\n");
					break;
				}
		 	case 2:
			{
				dequeue(q,n);
				printf("\n");
				break;
			}
			case 3:
			{
				display(q);
				printf("\n");
				break;
			}
			case 4 :
			{
				printf("Thank you\n");
				exit(0);
				break;
			}
		}
	}
}


