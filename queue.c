#include<stdio.h>
#include<stdlib.h>
#define SIZE  5
int CQ[SIZE];
int front =-1;
int rear=-1,ch;
int IsCQ_full();
int IsCQ_empty();
int CQ_Insert(int );
void CQ_delet();
void CQ_display();
void main()
{
	printf("1.Insert\n2.delete\n3.display\n4.exit\n");
	while(1)
	{
		int ele;
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
case1: if(IsCQ_full())
	      printf("circular queue overflow\n");
       else
       {
	       printf("enter the element to be inserted\n");
       }
       break;
case2: if(IsCQ_empty())
	printf("circular queue underflow\n");
       else
	       CQ_delet();
       break;
case3: if(IsCQ_empty())
	printf("circular queue underflow\n");
		else
		CQ_display();
	break;
case4:exit(0);
		}
	}
}
void CQ_Insert(int item)
{
	if(front==-1)
		front++;
	rear=(rear+1)%SIZE;
	CQ[rear]=item;
}
void CQ_delet()
		{
		int item;item=CQ[front];
		printf("deleted element is:%d",item);
		front=(front+1)%SIZE;
		}
void CQ_display()
		{
			int i;
		if(front==-1)
		printf("circular queue is empty\n");
		else
		{
		printf("elements of the circular queue are..\n");
		for(i=front;i!=rear;i=(i+1)%SIZE);
{
	printf("%d\t",CQ[i]);
			}
			}
			int IsCQ_full()
			{
			if(front==(rear+1)%SIZE)
			return 1;
			return 0;
			}
			int IsCQ_empty()
			{
			if(front==-1)
			return 1;
			else if(front==rear)

			{
			printf("deleted element is:%d",CQ[front]);
			front=-1;
			return 1;
			}
			return 0;
			}



	



		
		
		

       

