#include<stdio.h>
#include<conio.h>
      // wap program to find sum of matrix;
void main()
{
	int i,j, r,c,sum=0;
	printf("Enter your row:");
	scanf("%d",&r);
	printf("Enter your columns:");
	scanf("%d",&c);
	
	int  a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]\n",i,j);
			scanf("%d",&i,&j);
			
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
			
		}
		printf("sum is :%d\n",sum);
		printf("\n");
	}
	printf("sum is :%d",sum);
	
	
}