#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
}*head=NULL;
void create();
void display();
int main()
{
	create();
   // display();
    return 0;
}
void create()
	{
		struct node*temp,*t;
		int n,i;
		printf("enter the value of n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			temp=(struct node *)malloc(sizeof(struct node));
			printf("enter node value");
			scanf("%d",&temp->data);
			temp->link=NULL;
			if(head==NULL)
			{
				head=temp;
				t=temp;
			}
			else
			{
				t->link=temp;  
				t=temp;
			}
		}
	}
//	void display()
	//{
		struct node*t;
		   t=head;
		while(t!=NULL)
		{
			printf("%d->",t->data);
			t=t->link;
			printf("NULL");
		}
		// }
