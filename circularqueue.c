#include<stdio.h>
#define n 5
int cq[n]; 

void enqueue();
void dequeue();
void display();
void peek();

int rear=-1;
int front=-1;


int main(){
	
	int ch,c;
	printf("press1,push\npress2,pop\npress3 display\npress4,peek\n");
	 
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
			 default:printf("invalid number");
			         break;
			     }
			 printf("\npress 1 to continue,0 to exit\n");
			 scanf("%d",&c);
			
		 } while(c==1);
	   return 0;
	}
void enqueue()
{
	int x;
	printf("enter the data");
	scanf("%d",&x);
	
	if((rear+1)%n==front)
	printf("queue is empty");
	
	else if(rear==-1 && front==-1)
	{
		front=rear=0;
		cq[rear]=x;
		}
		else
		{
			rear=(rear+1)%n;
			cq[rear]=x;
			}
	}
	void dequeue()
	{
		if(rear==-1 && front==-1)
		{
		printf("queue is empty");
	    return;
	}
	else if(rear==front)
	{
		rear=front=-1;
		 }
		 else{
		 printf("the deleted element is %d",cq[front]);
		 front=(front+1)%n;
		 }
		}
		void display(){
		
		
		if(rear==-1 && front==-1){
			printf("queue is empty");
			return;
			}
			else
			{
				int i=front; 
				while(i!=rear)
				{
					printf("%d ",cq[i]);
					i=(i+1)%n;
					}
					printf("%d",cq[i]);
				}
		}
