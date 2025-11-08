#include<stdio.h>
int main()
{
	int a[2][2]={{2,3},{3,4}};
	int b[2][2]={{5,4},{2,4}};
	int c[2][2]={0};
	printf("Multiplication of two Matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
			
		

