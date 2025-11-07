#include<stdio.h>
int main()
{
	int arr[100],n,pos,num;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter %d elements");
	for(int i=0;i<n;i++)
	{
	
	scanf("%d",&arr[i]);
    }
	printf("enter the number to insert:");
	scanf("%d",&num);
	printf("enter the position to insert:",n+1);
	scanf("%d",&pos);
	for(int i=n;i>=pos;i--)
	{
	arr[i]=arr[i-1];
    }
	arr[pos-1]=num;
	n++;
	printf("array after insert\n:");
	for(int i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
    }
    return 0;
}

