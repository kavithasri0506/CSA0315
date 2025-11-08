#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*head=NULL;
void insertatany()
{
struct node*temp,*prev,*t;
int i,pos;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter data");
scanf("%d",&temp->data);
temp->link=NULL;
printf("Enter the position");
scanf("%d",&pos);
if(pos==0)
{
	temp->link=head;
	head=temp;
	return;
}
t=head;
for(i=0;i<pos&&t!=NULL;i++)
{
	prev=t;
	t=t->link;
}
prev->link=temp;
temp->link=t;
}
