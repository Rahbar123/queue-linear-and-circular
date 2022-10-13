#include<stdio.h>
#include<stdlib.h>
struct node{
	 int data;
	 struct node *next;
	};
struct node*rear=0,*front=0;
void enqueue();
void dequeue();
void display();
void peek();

int main(){
	
	int ch,c;
	printf("press1,push\npress2,pop\npress3,display\npress4,peek\n");
	
	do{
		printf("\nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			       break;
			case 2:dequeue();
			       break;
			case 3:display();
		       	   break;
		    case 4:peek();
			        break;
			 default:printf("invalid number");
			 break;
			}
			printf("\npress 1 to continue,0 to exit");
			scanf("%d",&c);
		}while(c==1);
		return 0;
	}	
	
	void enqueue()
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n enter data");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(rear==0 && front==0)
		{
			rear=front=newnode;
			}
			else
			{
				rear->next=newnode;
				rear=newnode;
				}
		}
		
	void dequeue()
	{
		struct node *temp;
		if(rear==0&&front==0){
	
	 	printf("queue is empty");
		return;
	       }
	       else if(rear==front)
	       rear=front=0;
	       else
	       {
			   temp=front;
			   front=front->next;
			   free(temp);
			   }
		}	
		
	void display()
	{
		struct node *temp;
		if(rear==0&&front==0)
		printf("queue is empty");
		
		else{
			
			temp=front;
			while(temp!=0)
			{
				printf("%d ",temp->data);
				temp=temp->next;
				}
			}
		}	
		
	void peek(){
		
	if(rear==0&&front==0)
	printf("queue is empty");
	else{
		printf("%d",front->data);
		  }
		}	
	
	
	
	
	
	
	
