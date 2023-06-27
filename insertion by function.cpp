#include <stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *head,*temp,*newnode;
	head=0;
	int length;
	printf("enter the no of node you want to :");
	scanf("%d",&length);
	for(int i=0;i<length;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data %d:",i+1);
		scanf("%d",&newnode->data);
		if(head==0)
		{
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
			
		}
	}
	temp=head;
	printf("linked list");
	while(temp!=0)
	{
		printf("  %d",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
	int operation;
	int pos_insertion,pos_deletion;
	printf("enter the postion\n1.insertion\n2.deletion\n");
	scanf("%d",&operation);
	if (operation==1)
	{
		printf("which postion you want to insert\n1.At starting postion\n2.at end postion\n3.at any index\n");
		scanf("%d",&pos_insertion);
		if(pos_insertion==1)
		{
			struct node{
				int data;
				struct node *next;
			};
			struct node *newnode1;
			int i;
			newnode1=(struct node*)malloc(sizeof (struct node));
			printf("enter the data:");
			scanf("%d",&newnode1->data);
			newnode1->next=head;
			head=newnode1;
			temp=head;
			printf("updated list:\t");
			while(temp!=0)
			{
				printf("%d\t",temp->data);
				temp=temp->next;
			}
			printf("\n");
		}
		}
	}
