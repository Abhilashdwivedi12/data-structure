#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main() {
    struct node *head,*temp,*newnode;
    head=0;
    int length;
    
    printf("Enter the number of Nodes in the list: ");
    scanf("%d",&length);
    
   for(int i=0;i<length;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        
        printf("Enter the data %d: ",i+1);
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
       
    }
    temp=head;
    printf("Your linked list is : ");
    while(temp!=0)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    }
