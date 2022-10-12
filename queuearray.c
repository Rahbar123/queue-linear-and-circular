#include<stdio.h>
#define n 5
int queue[n]; 

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
			  case 4:peek();
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
	printf("enter data");
	scanf("%d",&x);
	if(rear>=n-1)
	printf("queue is full");
	else if(rear==-1 && front==-1)
	{
		front=rear=0;
		queue[rear]=x;
		}
		else{
			
			rear=rear+1;
			queue[rear]=x;
			}
	}
	
	void dequeue()
	{
		if(rear==-1 && front==-1)
		printf("queue is empty");
		else if(front==rear)
		{
			front=rear=-1;
			}
			else
			{
				printf("the delete element is %d",queue[front]);
				front=front+1;
				}
		}
		
		void display()
		{
			int i;
			if(rear==-1 && front==-1)
			printf("queue is empty");
			else
			{
				for(i=front; i<=rear; i++){
					printf("%d ",queue[i]);
					}
				 
				}
			}
			
			void peek()
			{
				if(rear==-1 && front==-1){
					printf("queue is empty");
					return;
				}
				else
				{
					printf("%d",queue[front]);
					}
				
				}


